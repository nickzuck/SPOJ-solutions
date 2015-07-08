#include<stdio.h>
#include<math.h>

int main ()
{
	long long int a , b , n, ans , t  ; 
	scanf ("%lld",&t) ; 
	while (t--)
	{
		scanf ("%lld %lld",&a , &b)  ; 
		
			a = fmod(a , 10 ) ; 
			b = fmod (b, 100); 
			n = fmod (b , 4)  ; 
		

		
		if (a == 0 || a == 1 || a== 5 || a == 6)
			printf("%lld\n",a) ;
		else if (n == 0 )
		{
			//printf ("a = %lld\tb= %lld\t n =  %lld\n",a , b , n )  ; 
			ans = pow (a , 4)  ; 
			ans = fmod (ans , 10) ; 
			printf ("%lld\n",ans)  ; 	
		}	

		else 
		{
			//printf ("a = %lld\tb= %lld\t n =  %lld\n",a , b , n )  ; 
			ans = pow (a , n)  ; 
			ans = fmod (ans , 10) ; 
			printf ("%lld\n",ans)  ;
		}
	}
	
return 0 ; 
}