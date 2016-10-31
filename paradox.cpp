// ALGORITHM: Use of 2-SAT property, see quora answer by Brian Bi
// Find the connected compenents, if the negation of the statement
// is in the same component as that of the stateemnt, then it is 
// a paradox, else it is not

#include<bits/stdc++.h>

#define MAX 202
using namespace std; 

map<int, int> components ; 
int component ; // denotes the current component in the graph
int visited[MAX] ;

void DFS(int node, vector<int> adj[]){
    components[node] = component ;
    visited[node] = 1 ; 
    for(int i = 0 ; i< adj[node].size() ; i ++){
        if(visited[adj[node][i]] == 0)
            DFS(adj[node][i], adj);
    }
}

void pv(vector<int> a){
    for(int i= 0 ; i < a.size() ; i++){
        cout << a[i] << " ";
    }
    cout << endl ;
}

int main()
{
    int n, x ;
    char s[100] ;
    while(true){
        cin >> n; 
        if(n == 0 )
            break ;

        components.clear() ; // clear map for next processing
        vector<int> adj[MAX] ;
        bool tempBool ;
        memset(visited, 0, sizeof(visited));
        // input
        for(int i = 1 ;i <=n; i++){
            cin >> x >> s ;
            tempBool = (s[0] == 't');
            // Below statements are according to 2-SAT property
            adj[i].push_back(tempBool ? x : x+n);
            adj[tempBool ? x : x+n].push_back(i) ;
            adj[i+n].push_back(tempBool ? x+n : x);       
            adj[tempBool ? x+n :  x].push_back(i+n);
     }
        /*
        cout << "before all printing\n";
        for(int i = 1;i <=4 ; i++){
            cout << "adj[" << i << "]" << endl ;
            pv(adj[i]);
        }
        cout << "after all printing \n"; */

        //Processing
        component  = 0 ;
        for(int i =1 ; i<=2*n ; i++){
            if(visited[i] == 0){
                DFS(i, adj);
                component += 1 ;
            }
        }

        // cout << "cc = " << component << endl;
        bool notParadox = true;
        for (int i = 1; i <= n; i++){
            //cout <<components[i] << " " << components[i+n] <<endl;
            if (components[i] == components[i+n]){
                notParadox = false;
                break;
            }
        }

    if (notParadox)
      cout << "NOT PARADOX\n";
    else
      cout << "PARADOX\n";

    }       
    return 0 ;
}
