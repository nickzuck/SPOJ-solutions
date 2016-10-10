/* APPROACH: Find the LCS of the string and it's reverse */

#include<bits/stdc++.h>

#define MAX 6102
using namespace std ;

int dp[2][MAX+1];
int main()
{
    char str[MAX];
    int n, t  ; 
    cin >> n; 
        cin >> str ;
        n = strlen(str) ;
        for(int j = 0 ; j< n ; j++){
            dp[0][j] = 0 ;
            dp[1][j] = 0 ;
        }

        // Processing
        for(int i= 1; i <= n ;i ++){
            for(int j = 1 ; j <= n ; j++){
                if(str[i-1] == str[n-j]){
                    dp[i%2][j] = dp[(i-1)%2][j-1] + 1;
                }
                else{
                    dp[i%2][j] = max(dp[(i-1)%2][j], dp[i%2][j-1]);
                }
            }
        }
        //cout << " n = " << n << "  dp[i][j] = " << dp[n][n] << endl; 
        cout << (n - dp[1][n]) << endl ;
    
return 0 ;
}
