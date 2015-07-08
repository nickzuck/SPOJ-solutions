#include<stdio.h>

int main ()
{
	int var , t  , count= 0  ; 
	scanf ("%d" ,&t)  ; 
	count= 0  ; 
	while (t --)
	{
		scanf ("%d", &var) ; 
		if (var  > 0 ) count += var  ;
		
	}
printf ("%d",count)  ; 
return 0 ;
}