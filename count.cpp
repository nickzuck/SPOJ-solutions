#include<bits/stdc++.h>
#define MAX 5002
using namespace std ;

int dp[MAX][MAX]  ;
int solve(int n, int k ){
    cout << n << " " << k << endl ;
    if(k == 1){
        cout << "k = 1 \n";
        return 1 ;
    }
    if(n == 0){
        cout << "n = 0\n";
        return 1 ;
    }
    if(k == 0)
        return 0;
    if(k >n){
        cout << " k > n \n";
        dp[n][k] = 0 ;
        return 0 ;
    }
    if(dp[n][k] != 0){
        cout << "returning" << dp[n][k] << endl;
        return dp[n][k];
    }
    else{
        dp[n][k] = 0 ;
        int ans = 0 ;
        cout << "In else loop for n = "<< n << " k = " << k << endl ;
        for(int j = 0 ; j<= k ; j++){
            cout << "in foor loop\n";
            ans += solve(n-k, j);
        }
        cout << "after for loop for n = "<< n << " k = " << k << endl ; 
        cout << "ans = " << ans << endl ;
        dp[n][k] = ans ;
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
