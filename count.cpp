#include<bits/stdc++.h>
#define MAX 5002
using namespace std ;

int dp[MAX][MAX]  ;
int solve(int n, int k ){
    cout << n << " " << k << endl ;
    if(k == 0 ||  n == 0 ){
        return 0 ;
    }
    if(k >n){
        dp[n][k] = 0 ;
        return 0 ;
    }
    if(k == n ) {
        dp[n][k] = 1;
        return 1 ;
    }
    if(dp[n][k] != 0)
        return dp[n][k];
    else{
        int curr = 0 ;
        int limit ;
        if(n%2 == 0){
            limit = n/2 ;
        }
        else{
            limit = n/2 ;
        }
        cout << "n = " << n << endl ;
        cout << "limit  = " << limit << endl ;
        for(int i = 1 ;i <=limit ;  i++){
            //cout << "in for loop --> i = " << i << endl ; 
            curr = solve(n-i, k-1) ;
            cout << "value = " << curr << endl ;
            dp[n][k]  +=  curr ;
            cout << "after call " << n-i << "  " << k-1 << "  " << i << endl ;
        } 
    }
    return dp[n][k];
}

int main()
{

    int n, k ; 
    while(true){
        cin >> n >> k ; 
        if(n == 0 and k == 0 )
            break ; 
        dp[0][0] = 0 ;
        dp[0][1] = 0 ;
        for(int i  = 1 ; i<=n ; i++){
            dp[i][1] = 1;
            dp[i][0] = 0 ;
        }
        for(int i = 2; i <= k ;i++ ){
            dp[1][i] = 0 ;
            dp[0][i] = 0 ;
        }
        dp[n][k] = 0 ;
        int ans = solve(n, k ) ;
        cout << ans << endl ;
    }
return 0 ;
}
