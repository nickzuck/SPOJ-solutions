#include<bits/stdc++.h>

#define MAX 501
using namespace std; 

int knap[2][2000002] = {0};
void print(int val[], int weight[], int n , int maxW){
    for(int i = 0 ; i <= maxW; i++){
        cout << knap[0][i] << " " ;
    }
    cout << endl ;
    for(int i = 0 ; i <= maxW; i++){
        cout << knap[1][i] << " " ;
    }
    cout << endl ;
}
int knapsack(int val[], int weight[], int n , int maxW){
    bool a  ;

    //Testing 
    // for(int i = 0 ; i <= maxW; i++){
    //     cout << knap[0][i] << " " ;
    // }
    // cout << endl ;
    // for(int i = 0 ; i <= maxW; i++){
    //     cout << knap[1][i] << " " ;
    // }
    // cout << endl ;
    //Testing ends here

    for(int i = 1 ; i <=n ;i ++){
        a = i%2 ;
        for(int j = 1 ; j <= maxW ; j ++){
            if(weight[i-1] <= j){
                knap[a][j] = max( knap[!a][j- weight[i-1]] + val[i-1], 
                                  knap[!a][j]
                                ) ;
            }
            else{
                knap[a][j] = knap[!a][j];
            }
        }
        //print(val, weight, n, maxW );
    }
    //cout << knap[1][maxW] << " " << knap[0][maxW]  << endl;
    if(n&1){
        return knap[1][maxW];
    }
    else
        return knap[0][maxW];
}

int main(){
    int n, maxW ; 
    int val[MAX], weight[MAX] ;
    
    //Input
    cin >> maxW >> n ; 
    for(int i = 0 ;i < n ; i++){
        cin >> val[i] >> weight[i];
    }

    //Processing
    int ans ; 
    ans = knapsack(val, weight, n , maxW);
    cout << ans << endl;
    return 0 ;
}