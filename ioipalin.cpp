/* APPROACH: Find the LCS of the string and it's reverse */

#include<bits/stdc++.h>

#define MAX 6102
using namespace std ;

int dp[MAX+1][MAX+1];
int main()
{
    char str[MAX];
    int n, t  ; 
        cin >> n ;
        cin >> str ;
        n = strlen(str) ;
        for(int i = 0 ; i< n ; i++){
            dp[i][0] = 0 ;
            dp[0][i] = 0 ;
        }

        // Processing
        for(int i= 1; i <= n ;i ++){
            for(int j = 1 ; j <= n ; j++){
                if(str[i-1] == str[n-j]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        //cout << " n = " << n << "  dp[i][j] = " << dp[n][n] << endl; 
        cout << (n - dp[n][n]) << endl ;
    
    
return 0 ;
}
