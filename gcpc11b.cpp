#include<bits/stdc++.h>

#define MAX 1002
using namespace std; 

char sa[MAX] , sb[MAX];
int lcs(int n){
    int dp[n+2][n+2] ;
    for(int i =  0 ; i <=n ; i++){
        dp[0][i] = 0 ;
        dp[i][0] = 0 ;
    }

    int maximum = 0 ;
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <=n ; j++){
            if(abs(sa[i-1] - sb[j-1]) <= 1){
                dp[i][j] = dp[i-1][j-1] + 1; 
            }
            else{
                // Since the strings needed to be continouse
                // As per the question
                dp[i][j] = 0;
            }
            maximum = max(maximum, dp[i][j]);
        }
    }
    return maximum ;
}

int main()
{
    int t, n  ;
    cin >> t; 
    while(t--){
        cin >> n ; 
        cin >> sa >> sb ;
        int l = lcs(n);
        if(l >= ceil((1.0*n)/2.0)){
            cout << "POSITIVE\n";
        }
        else 
            cout << "NEGATIVE\n";
    }
}
