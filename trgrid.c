#include<stdio.h>
#include<math.h>

int main ()
{
	long long int r , c , t ; 
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld %lld",&r,&c) ; 
		if (c < r)
		{
			if (fmod(c,2) == 1)
				printf ("D\n") ;  
			else 
				printf ("U\n") ;
		}

		else 
		{
			if (fmod(r,2) ==1)
				printf ("R\n")  ; 
			else
				printf ("L\n") ; 
		}
	
	}

return 0 ; 
}
