#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std ;
int  main ()
{
    long long t , n,starts ; 
    cin >> t ; 
    while (t --){
        cin >> n >> starts ; 
        if (starts == 0) // airborne starts 
            cout << "Airborne wins." << endl ; 
        else 
            cout << "Pagfloyd wins."<< endl ;
    }
return 0 ;
}
