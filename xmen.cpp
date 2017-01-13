#include<bits/stdc++.h>

using namespace std ; 

int main()
{
    int t, n ; 
    cin >> t;
    while(t--){
        cin >> n ;
        int temp; 
        vector<int > dp(n+1), a(n+1);
        for(int i = 0 ; i < n ; i++){
            cin >> temp;
            dp[temp] = i;
        }
        for(int i = 0 ;i < n ; i++){
            cin >> temp ;
            a[i]= dp[temp];
        }
        vector<int> ans(n+1, 1000000000);

        for(int i = 0 ;i < n ; i++){
            *lower_bound(ans.begin(), ans.end(), a[i]) = a[i] ;
        }

        for(int i = 0 ;i <=n ;i++){
            if(ans[i] == 1000000000){ // till the time there are elements of array
                cout << i << endl ;
                break ;
            }
        }
    }
}
