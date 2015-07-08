#include<stdio.h>
#include<string.h>

int main ()
{
	int t ,  m , i , j  , len;
	char  str[90];
	scanf ("%d",&t) ; 
	for (i=1 ; i<=t ; i++)
	{
		scanf ("%d",&m) ; 
		scanf ("%s",str)  ;
		//printf ("this is the imput string %s\n",str)  ;
		printf ("%d ",i)  ; 
		for (j=0 ; j<m-1; j++)
			printf ("%c",str[j])  ;  
		len = strlen (str) ; 
		for (j =m ; j<len ; j++)
			printf ("%c",str[j]);	
		printf ("\n")  ; 

	} 

return 0 ; 
}