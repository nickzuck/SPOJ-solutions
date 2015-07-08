#include<cstdio>
#include<vector>

using namespace std ; 

#define MAX  10005

bool visited[MAX] , ans ; 
vector <int> graph[MAX] ;  

void DFS (int)  ; 

int main ()
{
	int  m , n ,  v1 , v2 , i , j ;
	scanf ("%d %d",&n , &m ); 
	ans = true ; 
	for (i =1 ; i<=m; i++)
	{
		scanf ("%d %d",&v1,&v2) ; 
		graph[v1].push_back (v2) ; 
		graph[v2].push_back (v1) ; 
	} 
	
	if (n!=m+1)
		ans = false ;  
	for (i =1 ; i <= n ; i++)
		visited[i]  = false ; 
	
	visited[1] = true ; 	
	DFS(1)  ; 
	for(i=1;i<=n;i++)
		if(visited[i]==false)
			ans=false;
	if (ans)
		printf ("YES\n") ; 
	else 
		printf ("NO\n") ; 

return 0 ; 
}

void DFS (int x)
{
	int i , c ;
	c=0;
	for(i=0;i<graph[x].size();i++)
		if(visited[graph[x][i]]==true)
			c++;
	if(c>1)
		ans=false; 
	for (i = 0 ; i<graph[x].size() ; i++)
	{
		if (visited[graph[x][i]] == false)
		{
			visited[graph[x][i]] = true ; 
			//visited[graph[i][x]] = true ; 
			//printf ("%d\t",graph[x][i]);
			DFS (graph[x][i]) ; 
		}
	}
}