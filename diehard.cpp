#include<bits/stdc++.h>

#define MAX 1002

using namespace std ;

    // 0 - Fire; 1 - Water ; 2 - Air
    int ha[] = {-20, -5 , 3};
    int aa[] = {5, -10, 2};


    int dp[MAX][MAX];
int solve(int curr, int h, int a){
   // cout << "h = " << h << "  a = " << a << endl;
    if(h <= 0 || a <= 0)
        return 0 ;
    //cout << "Before dp check\n";
    if(dp[h][a] != -1){
    //    cout << "In dp check\n";
        return dp[h][a];
    }
    // If it is air check for the possible solution with water and air
    if(curr != 2){
        dp[h][a] = max(dp[h][a], 1+solve(2, h+ha[2], a+aa[2]));
    }
    dp[h][a] = max(dp[h][a], max(1+solve(1, h+ha[1], a+aa[1]), 1+solve(0, h+ha[0], a+aa[0])));
    return dp[h][a];
}

int main()
{
    int t ; 
    cin >> t; 
    while(t--){
        memset(dp, -1, sizeof(dp));
        int h , a, t1 , t2;

        cin >> h >> a ;

        // Always start with air as it gives you both
        // health and armor
        cout << solve(2, h+ha[2], a+aa[2]) << endl;
        //cout << max(a1, max(a2, a3)) << endl;
    }
return 0 ;
}
