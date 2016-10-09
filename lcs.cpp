#include<bits/stdc++.h>

#define MAX 250002
using namespace std ;

int main()
{

    int lenA, lenB ; 
    char a[MAX], b[MAX];

    cin >> a  ; 
    cin >> b ;
    lenA = strlen(a) ;
    lenB = strlen(b) ;

    int n = max(lenA, lenB);
    std::vector< std::vector<int> > dp( std::vector<int>(500), 5000 );
    for(int i = 0 ; i < n ;i ++){
        dp[i][0] = 0 ; 
    }


    int ans = 0 ;
    for(int i = 0; i < lenA ; i++){
        for(int j = 0 ; j < lenB ; j++){
            if (a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] +1 ;
            }
        
            else{
                dp[i][j] = 0;
            }

            ans = max(ans , dp[i][j]);
        }
    }
    cout << ans << endl ;

return 0 ; 
}
