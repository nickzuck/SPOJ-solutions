#include<bits/stdc++.h>

using namespace std ; 

int main()
{
    int t ; 
    int h , w ;
    cin >> t; 
    while(t--){
        int dp[101][101]  = {0};
        int arr[101][101] ;
        cin >> h >> w; 
        for(int i = 0 ;i < h ; i++){
            for(int j = 0 ; j < w ; j++){
                cin >> arr[i][j];
            }
        }
    
        //Proceesing 
        // Base Case
        for(int i = 0 ; i < w ; i++){
            dp[0][i] = arr[0][i];
        }

        int ans = -1 ;
        for(int i = 1 ; i < h ; i++ ){
            for(int j = 0; j < w ; j ++){
                if(j > 0 and j <w-1 ){
                    dp[i][j] = max(dp[i-1][j-1], 
                                    max(dp[i-1][j],
                                        dp[i-1][j+1])) + arr[i][j];
                }

                else if(j< w-1){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j+1]) + arr[i][j];
                }
                else if(j > 0){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + arr[i][j];
                }
                ans = max(ans, dp[i][j]) ;
            }
        }
        cout << ans << endl ;
    }
    
return 0 ;
}
