#include<iostream>
#include<algorithm>

using namespace std ;

// Algorithm taken from topcoder

long long totient(long long n){
    long long result = n , i ;
    for(i = 2 ; i*i <= n ; i++){
        if(n%i == 0){
            result -= result/i ;
        }
        while( n%i == 0){
                n /= i ;
        }
        
    }
    if(n > 1)
        result -= result/n ;
    return result ;
}
int main()
{
    long long n , t; 
    cin >> t ;
    while(t--){
        cin >> n ; 
        cout << totient(n) << endl; 
    }

return 0 ;
}
