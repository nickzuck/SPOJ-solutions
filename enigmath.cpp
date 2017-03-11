#include<bits/stdc++.h>

using namespace std ;

int gcd(int a , int b){
    if(b == 0)
        return a ;
    else
        return gcd(b, a%b);
}
int main()
{
    int t,  a, b , x , y;
    cin >> t; 
    while(t--){
        cin >> a >> b;  
        int g ; 
        g = gcd(a, b);
        x = b/g ;
        y = a/g ;
        cout << x << " " << y << endl ;
        
    }
return 0 ;
}
