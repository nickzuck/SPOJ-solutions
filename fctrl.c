#include<stdio.h>

int main ()
{
	long long int num ; 
	long int t , pow , sum ;
	scanf ("%ld",&t) ;
	while (t--)
	{
		pow = 5 ; 
		sum = 0  ;
		scanf ("%lld",&num) ;
		while (num/pow != 0 )
		{
			sum = sum + num/ pow ; 
			pow = pow*5 ;	
		}
	printf ("%ld\n",sum) ;
	}
return 0 ;
}