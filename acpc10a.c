#include<stdio.h>

int main ()
{
	int a , b ,c , d1, d2, m , next; 
	
while (1)
	{
		scanf ("%d%d%d",&a , &b , &c);
		if (a ==0 && b == 0 && c== 0 )
		break ; 	
		
		d1 = b-a ; 
		d2 = c-b ; 
		if (d1 == d2) 
		{
			next = c+d1 ; 
			printf("AP %d\n",next);
		}

		else 
		{
			next = c*(b/a) ; 
			printf ("GP %d\n",next) ;
		}
	}

return 0 ;
}