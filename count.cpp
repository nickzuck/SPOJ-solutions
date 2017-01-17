#include<bits/stdc++.h>
#define MAX 5002
#define MOD 1988
using namespace std ;

int dp[MAX][MAX]  ;

void initialize(){
    for(int i = 0 ; i< MAX ; i++){
        dp[i][1] = 1 ;
        dp[0][i] = 1 ;
    }
}

void precompute(){
    // i --> trucks 
    // j --> computers
    initialize() ;
    for(int i =2 ; i < MAX ;i++){
        for(int j = 1 ; j < MAX ; j++){
            if(j-i >= 0 ){
                dp[j][i] = (dp[j-i][i] + dp[j][i-1])%MOD ;
            }
            else{
                dp[j][i] = (dp[j][i-1])%MOD ;
            }
        }
    }
}

int main()
{

    int n, k ; 
    precompute() ;
    while(true){
        cin >> n >> k ; 
        if(n == 0 and k == 0 )
            break ; 
        cout << dp[n-k][k]<< endl ;
    }
return 0 ;
}
