#include<stdio.h>

int main ()
{
	int t , candy[10002] , i , sum = 0 , move = 0 , ch;
	 scanf ("%d", &t) ; 
	while ( t !=-1)
	{
		for ( i = 1 ; i<=t ; i++)
		{
			scanf ("%d",&candy[i]) ;
			sum = sum + candy[i] ;
		}
		//if else construct along with output 
		if( sum%t != 0 )
			printf ("-1\n");
		else 
		{
			ch = sum /t ; 
 			for ( i = 1 ; i<=t ;i++)
			{
				if (candy[i] < ch)
					move  = move + (ch - candy[i]);
			}
			printf ("%d\n",move) ; 
		}
	
		scanf ("%d",&t) ;
		sum = 0 ; move = 0 ; 
	}
return 0 ;
}