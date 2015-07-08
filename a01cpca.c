
#include<stdio.h>


struct input
{
	int n,m,o ;
}a[1000] ;

int main ()
{
	int i = -1 , j , d1, d2 , next;
	do 
	{	i++;
		scanf ("%d",&a[i].n);
		scanf ("%d",&a[i].m);
		scanf("%d",&a[i].o);
	}while ( a[i].n != 0  &&  a[i].m != 0  &&  a[i].o != 0);	
	
	for(j=0;j<i;j++)
	{	
		d1 = a[j].m - a[j].n ; 
		d2 = a[j].o - a[j].m;

		if (d1 == d2)
		{
			printf ("AP");
			next = a[j].o + d1 ;
			printf (" %d\n",next);
		}
		
		else 
		{
			printf ("GP") ;
			next = a[j].o * (a[j].o / a[j].m);
			printf(" %d\n",next);
		}
	}


return 0 ;
}