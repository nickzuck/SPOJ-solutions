#include<stdio.h>
#include<math.h>

int main ()
{
	long long int a , b , t , c  , ans  ;
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld %lld",&a,&b)  ; 
		if (b == 0)
			printf ("1\n")  ; 
	
		else if (a == 0 || a==5 || a==6 || a==1)
			printf ("%lld\n",a) ; 
		else
		{
				a = a %10 ; 
				c = fmod (b,4); 
			if (c == 0 )
			{
				ans  = pow (a,4) ; 
				ans = fmod (ans , 10)  ; 
				printf ("%lld\n",ans)  ;
			}

			else 
			{
				ans = pow (a ,c) ; 
				ans = fmod (ans , 10 )  ; 
				printf ("%lld\n",ans)  ;
			}
		}
	}
return 0 ; 
}


