#include<stdio.h>

int rev(int * );

int main ()
{
	int t, k[1000],i;
	scanf ("%d",&t);
	for ( i=0; i<t;i++)
	{
		scanf ("%d",&k[i]);
		rev(&k[i]);
	}
	for ( i=0; i<t;i++)
	{
		printf ("%d\n",k[i]);
	}

return 0;
}


int rev (int * num )
{
	int RevNum  , j ;
	for (j=*num ; j<=1000 ; j++)
	{
		RevNum = 0 ; 
		while (j > 0)
		{
			RevNum = RevNum*10 + j%10;
			j  = j/10;
		}
	
		if (RevNum == j) 
		{
			*num = j;
			break;
		}
		
	}
return  0 ; 
}