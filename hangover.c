#include<stdio.h>

int main ()
{
	float  input, res , a ;
	int n ;   
	while (1)
	{
		scanf ("%f",&input)  ; 
	/*WHEN WE HAVE TO EXIT */
		if (input == 0.00)
			break ;
		res = 0 ; n = 1 ;  
		while (res <= input)
		{
			a =  1.00 / (n+1); 
			res = res + a ;   
			n++ ;  
			//printf ("RESULT  =  %f\n",res) ;

		}
	printf ("%d card(s)\n",n-1)  ;
			
	}

return 0 ;

}