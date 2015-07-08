#include<stdio.h>

int main ()
{
	long long int sum , a , anot ,al,d ,n;
	int t ,i , j  ;
	scanf ("%d",&t) ;
	for (i = 0; i<t ;i++)
	{
		scanf ("%lld%lld%lld",&a , &al , &sum);
		n = (2*sum)/(a + al);
		d = (al - a)  / (n-5);
		anot = a - (2*d);
		printf ("%lld\n",n) ;
		//printf ("%lld",d) ;
		for (j = 1 ; j<=n ; j++)
		{
			printf ("%lld ",anot);
			anot = anot + d ;
	
		}
	}
	printf ("\n");
return 0;
}