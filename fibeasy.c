#include<stdio.h>


int main ()
{
	int  first ,second, next, C, n[46], i , j;
	
	first = second =1 ; 
	scanf ("%d",&C); 

	for (i = 1 ; i <= C; i++)
	scanf ("%d",&n[i]) ;
	
	for (i =1 ; i <= C ; i ++)
	{
		for (j=1 ; j<=n[i] ; j++)
		{
			if ( j == 1 || j == 2)
			printf ("%d ", first) ;
			
			else
			{
				next = first + second;
         				first = second;
     			                second = next;
				printf ("%d ",next);
			}
		}
		printf("\n");
		first = second =1 ; 
	}
return 0 ;

}