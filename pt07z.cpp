// APPROACH: Use BFS + BFS, first to find the farthest leaf node and then
// to find the length of the path 
#include<bits/stdc++.h>

#define MAX 10001
using namespace std ;

vector<int> graph[MAX+1] ; 
bool visited[MAX+1];
pair<int, int> maxPair; // Pair to store the maximum weight and node for that

void BFS(int x){
    int node, wt ;
    queue<pair<int, int> > q ;
    maxPair = make_pair(0, 0);
   // cout << "maxx pair values " << maxPair.first << "  " << maxPair.second << endl ;
    q.push(make_pair(x,0));
    while(!q.empty()){
        node = q.front().first ;
        wt = q.front().second ;       
       // cout << node << "  " << wt << endl ;
        visited[node] = true;
        q.pop() ;
        for(int i = 0; i < graph[node].size() ; i++){
            if(!visited[graph[node][i]]){
                q.push(make_pair(graph[node][i], wt+1)) ;
            }
        }

        if(maxPair.first < wt){
            maxPair.first = wt ;
            maxPair.second = node;
        }
    }
}

int main()
{
    int i , j, x, y ;    
    int n ;
    cin >> n ; 
    for(i = 0; i < n-1 ; i++){
        cin >> x >> y ; 
        graph[x].push_back(y); 
        graph[y].push_back(x) ;
    }
       
    //cout << "Processing\n";
    memset(visited, 0, sizeof(visited));
    BFS(1);
    memset(visited, 0, sizeof(visited));
    BFS(maxPair.second);
    cout << maxPair.first <<endl;
    
return 0 ;
}
