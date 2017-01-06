#include<bits/stdc++.h>

#define MAX 1002

using namespace std ;

    // 0 - Fire; 1 - Water ; 2 - Air
    int ha[] = {-20, -5 , 3};
    int aa[] = {5, -10, 2};


        static int dp[MAX][MAX];
int solve(int curr, int h, int a){
   // cout << "h = " << h << "  a = " << a << endl;
    if(h <= 0 || a <= 0)
        return 0 ;
    //cout << "Before dp check\n";
    if(dp[h][a] != 0){
    //    cout << "In dp check\n";
        return dp[h][a];
    }
    switch(curr){
        case 0: //cout << "h = ";
                dp[h][a] =  (1 + max(solve(1, h+ha[1], a+aa[1]), solve(2, h+ha[2], a+aa[2])));
                return dp[h][a];
        case 1: //cout << "In case 1 \n" ;

                 dp[h][a] = (1 + max(solve(0, h+ha[0], a+aa[0]), solve(2, h+ha[2], a+aa[2])));
                 return dp[h][a];
        case 2: //cout << "In case 2\n";
                dp[h][a] = (1 + max(solve(0, h+ha[0], a+aa[0]), solve(1, h+ha[1], a+aa[1])));
                return dp[h][a];
    }
}

int main()
{
    int t ; 
    cin >> t; 
    while(t--){
        //memset(dp, sizeof(dp), -1);
        int h , a, t1 , t2;
        //cout << "Before input\n";
        cin >> h >> a ;
        //cout << "After input\n";
        int a1 = solve(0, h+ha[0], a+aa[0]) ;
        
        //cout << "After a1 assignment\n";
        int a2 = solve(1, h+ha[1], a+aa[1]) ;
        //cout << "After a2\n";
        
        //cout << "After a2 assignment \n";
        int a3 = solve(2, h+ha[2], a+aa[2]) ;
        //cout << "After a3\n";
        
        //cout << "After a3 assignment\n";
        //cout << a1 << a2 << a3 << endl;
        cout << max(a1, max(a2, a3)) << endl;
    }
return 0 ;
}
