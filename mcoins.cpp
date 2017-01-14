#include <bits/stdc++.h>
using namespace std;
#define MAX 1000002
int main() {
    bool dp[MAX];
    int n, m, l, k ;
    cin >> k >> l >> m ;
    dp[0] = 0;
    for(int i = 1; i < MAX; i++){
        dp[i]= 0;
        if(i-1 >= 0 and dp[i-1] == 0)
            dp[i]=1;
        else if(i-k >= 0 and dp[i-k] == 0)
            dp[i] = 1;
        else if(i-l >= 0 and dp[i-l] == 0)
            dp[i] = 1 ;
        /*
        if(i == MAX-1){
            cout << dp[i-1] << dp[0] << dp[3] << dp[12] << endl ;
        }*/
            
    }
     
    for(int i= 0 ; i < m ; i++){
        cin >> n ;
        if(dp[n])
            cout << "A";
       else
           cout << "B";
    }
    cout << endl ;
    return 0;
}
