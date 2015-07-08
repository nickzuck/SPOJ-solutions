#include<stdio.h>
#include<math.h>

int main ()
{
	long int t , n,i ,sum; 
	scanf ("%ld",&t)  ; 
	while (t--)
	{
		scanf ("%ld",&n)  ;
		sum = 0 ; 
		for (i=1 ; i<n ; i++)
		{
			if (fmod(n,i)== 0 )
				sum += i ; 		
		} 
		
		printf ("%ld\n",sum) ; 
	}

return 0 ;
}