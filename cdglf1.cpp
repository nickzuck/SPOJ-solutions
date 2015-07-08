#include<iostream>
#include<algorithm>

using namespace std ; 

int main ()
{
  int a[2003],n , t , i , m  ;
  cin >> t ; 
  while (t--){
    int s = 0 ; 
    cin >> n >> m ; 
    for (i = 0 ;i<n ; i++){
      cin >> a[i] ;
    }
    sort (a,a+n) ; 
  
    for (i = 0 ; i<m ; i++){
      if (a[i] > 0)
        break ; 
      s += a[i]  ; 
    }  
    cout << -s <<endl  ; 
  } 

return 0 ; 
}