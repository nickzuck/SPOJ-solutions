#include<stdio.h>

#define PI  3.141592

int main ()
{
	double l , ans ; 
	
	while (1)
	{
		scanf ("%lf ",&l)  ; 
		if (l == 0 )
			break  ; 
		ans =(l*l) / (PI*2) ; 
		printf ("%.2lf\n",ans)  ; 
	}
return 0 ; 
}