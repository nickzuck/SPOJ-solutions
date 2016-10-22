#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t, no, nt ;
    cin >>t ;
    while(t--){
        cin >> no >> nt ;
        int N ;
        cin >> N ;
        int oxy[N], nitro[N], wt[N];

        for(int i = 0 ; i < N ;i++){
            cin >> oxy[i] >> nitro[i] >> wt[i];
        }
        
        long  int dp[N+1][no+1][nt+1];
        for(int i = 0 ;i <=N ;i++){
            for(int j = 0 ; j <= no ; j++){
                for(int k = 0; k <= nt; k++){
                    if(i == 0){
                        dp[i][j][k] = INT_MAX ;
                        if(j == 0 and k == 0){
                            dp[i][j][k] = 0;
                        }
                    }

                   else{/*
                    cout << i  <<"  "<< j << "  " << k << endl;
                    cout << "dp[i-1][j][k] = " << dp[i-1][j][k] << endl;
                    cout << " wt[i] + dp[i-1][max(0,j- oxy[i])][max(0, k-nitro[i])] = " <<  wt[i] + dp[i-1][max(0,j- oxy[i])][max(0, k-nitro[i])] << endl;
                    cout << "max(0,j- oxy[i]) = " << max(0,j- oxy[i]) << endl;
                    cout << "max(0, k-nitro[i])  = " << max(0, k-nitro[i]) << endl; 
                    cout << "dp[i-1][max(0,j- oxy[i])][max(0, k-nitro[i])] = " << dp[i-1][max(0,j- oxy[i])][max(0, k-nitro[i])] << endl; */
                    dp[i][j][k] = min(dp[i-1][j][k] , wt[i] + dp[i-1][max(0,j- oxy[i])][max(0, k-nitro[i])]);
                   }
                }
            }
        }
        cout << dp[N][no][nt] << endl;
    }
return 0 ;
}
