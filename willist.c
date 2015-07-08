#include<stdio.h>

int main ()
{
	long long int a  ; 
	scanf ("%lld",&a)  ; 
	if ((a&(a-1)) == 0 )
		printf ("TAK\n") ; 
	else 
		printf ("NIE\n") ; 
return 0 ; 
}