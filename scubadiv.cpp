#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int c ;
    cin >> c;
    while(c--){
        int t , a ; 
        cin >> t >> a ;

        int n ; 
        cin >> n;

        int oxygen[n+1], nitrogen[n+1], weight[n+1]; 
        for(int i = 0 ;i < n ;i++){
            cin >> oxygen[i] >> nitrogen[i] >> weight[i];
        }

        // Processing
        int dp[2][t+1][a+1];
        for(int i = 0 ;i < t ; i++){
            for(int j = 0 ; j < a ; j++){
                dp[1][i][j] = 800000;
            }
        }
        dp[1][0][0] = 0 ;
        
        
        int t1, t2 ;
        for(int i = 0, r = 0 ; i < n ; i++, r ^=1){
            for(int j = 0 ; j <= t ; j++){
                for(int k = 0 ; k <= a ; k++){
                    t1 = max(0 , j - oxygen[i]);
                    t2 = max(0 , k - nitrogen[i]);
                    dp[r][j][k] = min(dp[r^1][j][k], dp[r^1][t1][t2] + weight[i]);
                }
            }
        }

        cout << dp[(n-1)&1][t][a] << endl;
        

    }
return 0 ;
}
