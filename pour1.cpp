#include<bits/stdc++.h>

using namespace std ; 

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    a %= b ;
    return gcd(b,a);
}

// x-> capacity of a 
// y-> capacity of b
int solve(int a, int b ,int c, int x, int y){
    int count = 0 ; 
    while(a != c and b != c){
        if(a == 0){ // make the jar a full
            a = x ;
        }
        else if(b == y){ // if jar b full make it empty
            b = 0 ;
        }
        else{
        // if b is empty and a is not empty pour something to it  
            b = b + a ; 
            a = 0 ;
            // Since the water in a may be present after 
            // filling b completly
            if(b > y){
                a = b-y ; 
                b = y ;
            }
        }

        count ++ ;
    }
    return count ;
}

int main()
{
    int t, a , b, c ;
    cin >> t; 
    while(t--){
        cin >> a >> b >> c ;
        if(c%gcd(a, b) != 0 or (c > a and c > b)){
            cout << -1 << endl ;
        }   
        else{
            cout << min(solve(0, 0, c, a, b), solve(0, 0, c, b, a)) << endl;
        }
    }
return 0 ;
}
