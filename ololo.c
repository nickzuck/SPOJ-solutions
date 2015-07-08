#include<stdio.h>

//using namespace std ;

int main (){
    long long int i ,  n , x , inp   ; 
    scanf ("%lld",&n) ; 
    for (i =0 ; i<n ; i++){
        scanf ("%lld",&inp ); 
        if (i == 0)
	    x = inp ;
        else
	    x = x ^ inp; 
       
    }
    printf ("%lld\n",x) ; 
return 0 ; 
}
