#include<iostream>

using namespace std ; 

int main ()
{
   int a , b ; 

    while (1){ 
    	cin >> a >>b ; 
        if (a == -1 && b == -1)
	    break ;
        if (a == 0 and b == 0)
	        cout<< "0+0!=0\n" ; 
        else{
    	    if(a == 1 || b == 1){ 
        	    cout<< a << "+" << b <<"=" << a+b <<endl;
            }
            else
                cout << a << "+" << b << "!=" << a+b << endl;
	    }
    }
return 0 ; 
} 
