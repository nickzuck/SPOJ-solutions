#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int c1 , c2 , c3, n ;
    int ans ;
    int t1, t3 ;
    char t2;
    cin >> n ; 
    c1 = c2 = c3 = ans = 0 ;
    for(int i = 0 ; i < n ;i ++){
        cin >> t1>> t2 >> t3 ;
        if(t1 == 3){
            c3 ++ ;
        }
        else if(t3 == 2){
            c2 ++ ;
        }
        else if(t3 == 4){
            c1 ++ ;
        }
    }

    // Processing
    ans += c3 ;
    c1 -= c3 ;
    ans += c2/2 ;
    if(c2%2){
        ans ++ ; 
        c1 -= 2 ;
    }

    if(c1 > 0){
        ans += c1/4 ; 
        if (c1%4){
            ans ++ ;
        }
    }

    cout << ans + 1 << endl ;

return 0 ;
}
