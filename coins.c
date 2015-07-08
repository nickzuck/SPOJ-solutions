#include<stdio.h>
#include<math.h>

int main ()
{
	long long int  n ,  a , b , c , temp ; 
	scanf ("%lld",&n)  ; 
	temp  = n/2 + n/3  + n /4 ; 
	if (temp > n)
		printf ("%lld\n",temp) ; 
	else  
		printf ("%lld\n",n) ;
return 0  ; 
}
