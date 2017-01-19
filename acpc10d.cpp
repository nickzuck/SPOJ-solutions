#include<bits/stdc++.h>
#define MAX 100002

using namespace std;

int arr[MAX][4] ;
int dp[MAX][4];
int n;

int solve(int i, int j){
    if(i==n-1 and j == 0){
        return arr[i][j] + arr[i][1];
    }
    if(i == n-1 and j == 2)
        return INT_MAX;
    if(i == n-1 and j == 1)
        return  arr[i][1];
    if( dp[i][j] != -1){
        return dp[i][j] ;
    }
    else{
        int ans ;
        ans = arr[i][j] ;
        switch(j){
            case 0: ans += min(solve(i+1, j+1), min(solve(i+1, j), solve(i, j+1)));
                    break ;
            case 1: ans += min(solve(i+1, j+1), min(min(solve(i+1, j-1), solve(i+1, j)), solve(i,j+1)));
                    break ;
            case 2: ans += min(solve(i+1, j-1), solve(i+1, j));
                    break ;
        }
        dp[i][j] = ans ;
        return ans ;
    }
}
int main(){
    int counter =  0 ;
    while(true){
        counter += 1 ;
        cin >> n ;
        if(n == 0)
            break ;
        memset(dp, -1, sizeof(dp));
        for(int i=0 ; i < n ; i++){
            for(int j=0; j<3;j++){
                cin >> arr[i][j] ;
            }
        }
        int i=0, j=1;
        
        cout << counter << ". " << arr[0][1] +  min( solve(i+1, j-1), min(solve(i+1,j), min(solve(i+1,j+1), solve(i, j+1)))) <<endl;
    }
return 0;
}
