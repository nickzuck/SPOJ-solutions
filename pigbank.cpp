// Unbounded Knapsack - Learned new comcept

#include<bits/stdc++.h>

using namespace std; 

bool flag ;
int knapsack (int value[] , int wt[] , int n , int maxW)
{
    int dp[maxW+1] ;
    dp[0] = 0 ; // no value for no weight---Simple ?? 
    flag = false ;
    for(int i = 1 ;i <=maxW ; i ++){
        dp[i] = -1;
        // For every weight from 1 to maxW conseider every item
        for(int j = 0 ; j <n ; j++){
            // knapsack size greater than current weight of item
            // and we already know the value if item j is not included
            // then proceed to optimize it.
            if(i >= wt[j] and dp[i-wt[j]] != -1 and (dp[i] == -1 or value[j]+dp[i-wt[j]] <= dp[i])){
                dp[i] = value[j] + dp[i-wt[j]] ; //min won't work since we have -1 intially
            }
        }
    }
    if(dp[maxW] != -1)
        flag = true ;
    return dp[maxW];
}

int main(){
    int t ;
    cin >> t; 
    while(t--){
        int f, e ;
        cin >> e >> f ; 
        int n ;
        cin >> n ; 
        int wt[n+1] , val[n+1] ;
        for(int i = 0 ; i < n ; i++){
            cin >> val[i] >> wt[i];
        }
        int ans = knapsack(val, wt, n ,f-e );
        if(flag)
            cout << "The minimum amount of money in the piggy-bank is " << ans << ".\n";
        else
            cout << "This is impossible.\n";
    }

return 0 ;
}
