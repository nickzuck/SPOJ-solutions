#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
	int temp , t , ans , c   , len ,a  ; 
	long long int b ;
	char str[1002]  ;  
	scanf ("%d",&t) ;
	while (t--)
	{
		do
		{
			scanf ("%d",&temp) ; 
			if (temp !='\0')
				a = temp ; 
		}while (temp != '\0');
		scanf ( "%d",&b) ; 
		len = strlen (str) ; 
		a = str[len-1] - 48  ; 
		//temp = a *2 ;
		//printf ("A = %d  b =%d\n",temp , b)  ;  
		if (b == 0)
			printf ("1\n") ; 
		else if (a == 0 || a==5 || a==6 || a==1)
			printf ("%lld\n",a) ; 
		else 
		{
			c = fmod (b,4) ; 
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
return 0  ; 
}