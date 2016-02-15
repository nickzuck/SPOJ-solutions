#include<iostream>
#include<vector>
#include<stack>

using namespace std ;

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
            adj[x].push_back(y) ; 
            adj[y].push_back(x) ;
        }
        ans = checkGraph(adj , nodes) ;

        cout << "Scenario #" << i+1  << ":"<< endl  ;
        if(ans){
            cout << "No suspicious bugs found!" << endl; 
        }
        else
            cout << "Suspicious bugs found!" << endl ;
 
    }

return 0;
}
