#include<bits/stdc++.h>
#define isOn(x, i) (((x) >> (i)) & 1)
using namespace std ;

int main()
{
    int n , t, i , j ; 
    cin >> t ; 
    while(t--){
        cin >> n; 
        int likes[n+1][n+1];
        for(i = 0 ;i < n ;i++){
            for(j = 0 ; j< n ; j++){
                cin >> likes[i][j];
            }
        }
    
        long long int N = 1 << n;
        // Here dp works with 1d because the recursion is always 
        // of the type dp(x, y), where x is always equal to y
        long long int dp[N+1];  
        memset(dp, sizeof(dp), 0);

        // Base Case
        dp[0] = 1 ;
        
        for(i = 1 ; i <N  ; i++ ){
            
            dp[i] = 0 ;
            // Find the number of 1s in the number
            int ones = __builtin_popcount(i) ;

            //f(n, s) = sum of all f(n - 1, s without e) for each e in s, which the student n likes
            for(j = 0 ; j < n ; j++){
                if(likes[ones-1][j] == 1 && isOn(i,j)){
                    dp[i] += dp[i & ~(1<<j)];
                }
            }
        }

        cout << dp[N-1] << endl;
    }
    
    return  0 ;
}
