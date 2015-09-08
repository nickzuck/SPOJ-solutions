#include<iostream>
#include<cmath>
#include<algorithm>


using namespace std ; 

int main ()
{
    long long int  t , n , m , i , j , min; 
    cin >>t ; 
    while (t--){

        cin >> n ; 
        long long int a[n+1]  ;
        for (i = 0 ; i<n ; i++){
            cin >> a[i] ; 
        }

        cin >> m ; 
        long long int b[m+1] ;
        for (j = 0 ; j<m ;j++){
            cin >> b[j] ; 
        }    

        long long int diff ;     
        for (i = 0;  i<n ; i++){
            for (j= 0 ; j<m ;j++){
                diff = abs(a[i] - b[i]) ; 
                if (diff < min || i == 0 ){
                    min = diff ; 
                }
            }
        }

        cout << min << endl ;
    }

return 0 ;
}
