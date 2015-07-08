#include<iostream>
#include<cmath>

#define MAX 102

using namespace std ; 

int main ()
{
    int a[MAX] , t , temp , sum , ans ; 
    cin >> t ;
    sum = 0 ;  
    for (int i = 0 ; i<t ; i++){
        cin >> a[i] ; 
	sum += a[i] ; 
    }
    temp = sum / t ; 
    ans = 0 ; 
    for (int i = 0 ; i<t ; i++){
	ans += abs (temp - a[i]) ; 
    }
    cout << ans /2 <<endl ; 

return 0 ; 
}