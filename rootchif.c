#include<stdio.h>
#include<math.h>

int main  ()
{
	long long int t , ans ,a , b , c;
	scanf ("%lld",&t) ; 
	while (t--)
	{
		scanf ("%lld %lld %lld",&a , &b , &c) ; 
		ans = pow (a , 2)  - 2*b ; 
		printf ("%lld\n",ans)  ; 
 	}

return 0 ; 
}