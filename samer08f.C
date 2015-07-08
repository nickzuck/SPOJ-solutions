#include<stdio.h>
#include<math.h>

int main ()
{
	int a[100] , i , j , test, sol[100];
	
//INPUT 
	for (i=1 ; i<=100;i++)
	{
		scanf ("%d",&a[i]);	
		if (a[i] == 0 )
		{
			test = i -1;
			break ;  
		}
	}
//PROCESS
	for (j=1 ; j <= test ; j++)
	{
		sol [j] = 0 ;
		for (i=1 ; i <= a[j] ; i++)
		{
			sol[j] = sol[j] + pow(i,2);		
		}
	}

//OUTPUT
	for (j=1 ; j <= test ; j++)
	{
		printf ("%d\n",sol[j]);	
	}
return 0 ;
}