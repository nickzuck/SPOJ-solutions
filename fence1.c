#include<stdio.h>
#include<math.h>



int main ()
{
	double ans , l ; 
	while(1) 
	{
		
		scanf ("%lf",&l) ; 
		if (l == 0 )
			break ;
		ans = (l*l)/(atan(1.0) *8) ; 
		printf ("%.2lf\n",ans)  ; 
		
	}

return 0  ; 
}