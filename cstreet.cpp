#include<bits/stdc++.h>

#define MAX 1002
#define MAX2 300002

using namespace std ;

int parent[MAX], n, m  ;
pair<int, pair<int, int> > edges[MAX2], temp;

void initialize(int limit){
    for(int i = 0 ;i <= limit; i++){
        parent[i] = i;
    }
}

void pa(int a[], int n){
    for(int i = 0;  i < n ;i++){
        cout << a[i] << " " ;
    }
    cout << endl;
}


int findParent(int node){
    /*cout << "Before while loop\n ";
    cout << "parent[node] = " << parent[node] << endl ;
    cout << "node = " << node << endl; */
    while(parent[node] != node){
        parent[node] = parent[parent[node]];
        node = parent[node];
    }
//    cout << "Find parent , node = " << node  << endl;
    return node;
}
/*

int findParent(int node){
    while(parent[node] != node){
        parent[node] = parent[parent[node]];
        node = parent[node];
        
    }
    return node;
}*/

// n1 = node 1
// n2 = node 2
void _union(int n1, int n2){
    int p = findParent(n1);
    int q = findParent(n2);
    //cout << "In union\n" ; 
    //cout << p << "  " << q << endl ;
    parent[p] = parent[q];
}

int kruskal(){
    int x ,y ; 
    int edgeCost , minCost = 0; 
    
    for(int i = 0 ;i < m ; i++){
        // find the connected nodes via this edge
        temp = edges[i];
        x = temp.second.first;
        y = temp.second.second ;
        edgeCost = temp.first;
        
        //cout << "Selected edge is " <<x << " " << y << " " << edgeCost << endl;
        // Check if the selected edge will form cycle or  not
        // cout << "Before if statemnt \n";
        //cout << "cost till now = " << minCost << endl ;
        if(findParent(x) != findParent(y)){
            //cout << "After if staement \n";
            minCost += edgeCost;
            _union(x, y);
            //pa(parent, m+1);
        }
    }
    return minCost ;   
}

int main()
{
    int t, x, y, p, priceForOne;

    cin >> t; 
    while(t--){
        cin >> priceForOne;
        cin >> n >> m ;
        initialize(n);
        //pa(parent, m+1);
        for(int i = 0 ; i< m ; i++){
            cin >> x >> y >> p ;
            edges[i] = make_pair(p, make_pair(x-1, y-1));   
        }

        sort(edges, edges+ m);
        
        int minCost =  kruskal();
        cout << minCost*priceForOne << endl;
    }
return 0 ;

}
