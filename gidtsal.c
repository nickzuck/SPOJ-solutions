#include<stdio.h>
#include<math.h>

int main ()
{
	long long int  b ,a, ans  , i , temp   ; 
	int t    ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%lld%lld",&a, &b)  ; 	
		ans = a ; 
		if (b == 0 )
		{
			ans = 1 ;
			printf ("%lld\n",ans ) ; 
		}
		else 
		{
			for ( i = 1 ; i < b  ; i++)
			{

				//printf ("i-1=\t%lldans=\t%lld\n",i-1,ans)  ;
				ans = ans * a ;
				ans = fmod (ans , 10)  ;   
			}

			ans = fmod (ans, 10 ) ; 	
			printf ("%lld\n",ans) ; 
		}
	}
	
return 0 ; 	  
}