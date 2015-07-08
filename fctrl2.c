#include<stdio.h>

long int fact (short  int *);

int main ()
{
	short int num[100],test,i;
	long int res[i] ; 
	scanf ("%d",&test);
	
	for (i=0 ; i< test ; i++)
	{
		scanf ("%d",&num[i]);
		res[i]=fact (&num[i]);
	}
	for (i=0 ; i< test ; i++)
	{
		printf ("%ld\n",res[i]);
	}
return 0 ;

}

long int fact (short int * p) 
{
	int f = 1 ,i = 1; 

	while(i <= *p)
	{
      		f = f * i;
     	 	i++;
  	}	
 return f ; 
}