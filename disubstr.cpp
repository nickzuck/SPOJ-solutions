#include<bits/stdc++.h>

using namespace std ;

int LPR(string a , string b){   
    int i ; 
    for(i = 0 ; i < a.length() && i < b.length() ; i++){
        if(a[i] != b[i]){
            break ;  
        }
    }

    return i ;
}

int main()
{
    long long t, ans ;
    cin >> t  ; 
    while(t--){
        string s ; 
        cin >> s ;
        int n = s.length() ; 
        string* suffix = new string[n];
        for(int i = 0 ; i< n ; i ++){
            suffix[i] = s.substr(i)  ; 
        }

        sort(suffix, suffix+n);

        string prev = "" ;
        ans = 0 ; 
        for(int i = 0; i < n ; i++){
            ans += suffix[i].length() - LPR(prev, suffix[i]);
            prev = suffix[i] ;
        }

        cout << ans << endl ;
    }
return 0 ;
}
