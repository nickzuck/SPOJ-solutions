#include<bits/stdc++.h>
#define MAX 2002
using namespace std ;

int arr[MAX] ; 
int dp[MAX][MAX];
int solve(int start, int end, int a){
    int temp ;
    if(start == end){
        temp = a* arr[start] ;
        dp[start][end] = temp ;
        return temp;
    }
    if(dp[start][end] != -1) 
        return dp[start][end] ;
    else{
        dp[start][end] = max(solve(start+1, end, a+1) + a*arr[start],
                             solve(start, end-1, a+1) + a*arr[end]) ;
        return dp[start][end];
    }
}

int main()
{
    int n ;
    cin >> n ;
    for(int i =0 ;i < n ; i++) {
        cin >> arr[i] ; 
    }
    memset(dp, -1, sizeof(dp));
    cout << solve(0, n-1, 1) << endl ;

return 0 ;
}
