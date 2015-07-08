#include<stdio.h>

int main ()
{
	long long int t , n , sum,rem,i , j , a; 
	scanf("%d",&t) ;
	for (i=0; i<t;i++)
	{
		sum = 0 ;
		scanf ("%lld",&n);
		for (j=0 ; j<n; j++)
		{
			scanf ("%lld",&a);
			sum = sum+ a%n ;
				
		}
	rem = sum % n ;
	if (rem == 0 ) printf ("YES\n");
	else printf("NO\n");
	printf ("\n") ;
	}
return 0 ;
}
