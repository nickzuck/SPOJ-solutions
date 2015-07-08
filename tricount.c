#include<stdio.h>
#include<math.h>

int main ()
{
	long long int  n ,ans  ;  
	int t   ; 
	
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%lld",&n)  ; 
		ans = (n* (n+2) * ((2*n) +1) )  / 8 ; 
		printf ("%lld\n",ans) ; 
	}

return 0 ; 
}