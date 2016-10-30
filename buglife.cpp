#include<bits/stdc++.h>

using namespace std ;

/*
int checkGraph(vector<int> adj[], int nodes){
    const int size = nodes ;

    int color[2002] , i; 

    stack<int> q ;
    for(int j = 0 ; j <= nodes; j++)
        color[j] = -1 ;

    for(int s = 1 ; s<= nodes ; s++){
    // Assign the color of source
        if(color[s] == -1){
            color[s] = 1 ; 
            q.push(s);
        }
        while(!q.empty()){
            int u = q.top() ;
            q.pop() ;
    
            //Find the non colored adjacent vertices
            for(i = 0 ; i< adj[u].size() ; i++){
                if(color[i] == -1){
                    color[i] = 1 - color[u] ; 
                    q.push(i) ;
                }

                else if (color[i] == color[u]) {
                   // cout << "Something fissy\n" << i << " " << u ;
                    // cout << "\nColors are \t" << color[i] << "  " << color[u] << endl ;
                    return 0 ;
                }
            }
        
        }
    }
    return 1 ;
}*/

// Checks if the genders are opposite, if yes then return 1,else 0
int dfs(vector<int> adj[], int n , int visited[], int node){
    stack<pair<int, int> > s ;
    pair<int, int> tempPair;
    if(visited[node] == -1){
        s.push(make_pair(node, 0));
    }

    else{
        return 1 ; // return true if the node is already visited
    }
    while(!s.empty()){
        tempPair = s.top() ; s.pop() ;
        for(int i = 0 ; i<adj[tempPair.first].size() ; i++){
            // If node is already visited check for color
            // else assign it a color
            if(visited[adj[tempPair.first][i]] == -1) {
                s.push(make_pair(adj[tempPair.first][i], !tempPair.second));
                visited[adj[tempPair.first][i]] = !tempPair.second ;
            }
            else{
                if(visited[adj[tempPair.first][i]] == tempPair.second){
                    // Seomthing fisshy ;
                    return 0 ;
                }
            }
        }
    }
    // If the dfs for the nodes passes good, then everything is good 
    // till now as expected
    return 1 ;
}

int isCorrect(vector<int> adj[], int n){
    int visited[n];
    memset(visited, -1, sizeof(visited));
    int tempAns ; 
    for(int i = 0 ; i < n; i++){
        tempAns = dfs(adj,n, visited, i);
        if(tempAns == 0)
            return 0;
    }
// If all the dfs gives answer correct, then return 1
return 1 ;
}
int main()
{
    int t,i , nodes, edges, x , y , j , ans ;
    cin >> t ; 
    for(i = 0 ; i < t ; i++){
        vector<int> adj[2002] ;
        cin >> nodes >> edges ; 
        for(j = 0 ; j < edges ; j++){
            cin >> x >> y ; 
            adj[x-1].push_back(y-1) ; 
            adj[y-1].push_back(x-1) ;
        }
        ans = isCorrect(adj , nodes) ;

        cout << "Scenario #" << i+1  << ":"<< endl  ;
        if(ans){
            cout << "No suspicious bugs found!" << endl; 
        }
        else
            cout << "Suspicious bugs found!" << endl ;
 
    }

return 0;
}
