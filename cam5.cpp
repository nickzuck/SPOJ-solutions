#include<bits/stdc++.h>

#define MAX 100002
#define mp make_pair
#define pb push_back
using namespace std ;

vector<int> graph[MAX];
bool visited[MAX];

void initialize(int n){
    for(int i = 0 ; i < n ; i++){
        visited[i] = false ;
        graph[i].clear();
    }
}

void dfs(int source, vector<int> graph[]){
    stack<int> s;
    s.push(source);
    while(!s.empty()){
        int item = s.top() ;
        s.pop();
        visited[item] = true;
        for(int i = 0 ;i <graph[item].size() ; i++){
            int temp = graph[item][i];
            if(!visited[temp])
                s.push(graph[item][i]);
        }
    }
}

void pa(int n){
    for(int i = 0 ; i < n ; i++)
        cout << visited[i] << " " ;
    cout << endl ;
}
int main()
{
    int t, n ;
    cin >> t ; 
    while(t--){
        cin >> n ;
        initialize(n);
        int e, a, b ;
        cin >> e ;
        for(int i = 0 ;i < e; i++){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        
        // Processing
        int count = 0;
        for(int i = 0 ;i < n ; i++){
            if(!visited[i]){
                dfs(i, graph) ;
                count ++ ;
            }
        }
        cout << count << endl ;
        
    }
return 0;
}
