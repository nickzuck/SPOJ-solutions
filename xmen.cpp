#include<bits/stdc++.h>

using namespace std ; 

int main()
{
    int t, n ; 
    cin >> t;
    while(t--){
        cin >> n ;
        int arr[n+1], brr[n+2] ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ; 
        }
        for(int i = 0 ;i < n ; i++){
            cin >> brr[i];
        }
        int dp[2][n+2] ;
        
        for(int i = 0 ; i < n ; i++){
            dp[0][i] = 0;
            dp[1][i] = 0;
        }
    
        // find the lcs
        for(int i = 1 ;i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(arr[i-1] == brr[n-j]){
                    dp[i&1][j] = dp[!(i&1)][j-1] + 1;
                }
                else
                    dp[i&1][j] = max(dp[!(i&1)][j], dp[i&1][j-1]);
            }
        }
        cout << max(dp[0][n], dp[1][n]) << endl;
    }
}
