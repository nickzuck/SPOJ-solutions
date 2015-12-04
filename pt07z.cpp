/*Doing it for un-directed graph*/
/*This code is taken from https://github.com/nickzuck/Data-Structures-and-Algorithms*/

#include<iostream>
#include<vector>

#define MAX 10002

using namespace std ;

vector <int> adj[MAX] ; 
bool visited[MAX] ; 


/*Initialize the boolean values to the visited part ..Since no nodes got traversed till now */
void initialize(int nodes)
{
	for (int i = 1 ; i<=nodes ;i++){
		visited[i] = false ; 		
	}
}

//to perform depth first search

int count = 0; 

void dfs(int current)
{
	//cout << current << "\t";
	count ++ ; 
	visited[current] = true ; 
	for(int i = 0 ; i< adj[current].size() ; i++){
		if (visited[adj[current][i]] == false){
			dfs(adj[current][i]) ;
		}
	}
}
 
int main ()
{
	int nodes , edges , x , y  , i ; 
	//cout << "Enter the total nodes in the graph\t" ;
	cin >> nodes ; 
	//cout << "Enter the total edges of the graph\t" ;
	//cin >> edges ; 	
	//cout << "Enter the edges pairs of the graph (eg : a b)for a->b)\n" ;
	for (i = 0 ; i <nodes-1; i++){
		cin >> x >> y ; 
		adj[x].push_back(y);
		adj[y].push_back(x); 
	}

	initialize(nodes) ; 
	int max_count =  0 ;
	//cout << "The dfs traversal sequence is given as\n" ;
	for (i = 1 ; i<=nodes ; i++){
		if(visited[i] == false){
			dfs(i);
		}
		if (count > max_count){
			max_count = count ;
		}
		count = 0; 
		initialize(nodes);
	}
	cout << max_count-1 << endl ; 
return 0 ; 
}