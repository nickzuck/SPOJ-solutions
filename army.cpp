#include<cstdio>

using namespace std ; 

int main ()
{
	int i , j , n , m ,t , stra , strb, c ;
	scanf ("%d",&t)  ; 
	while (t--)
	{

		stra = -100 ; 
		strb = -100 ; 
		scanf ("%d %d",&n , &m ) ; 
		for (i = 0 ; i <n ; i++)
		{
			scanf ("%d",&c); 
			if (c > stra )
				stra = c ; 
		}
		
		for (j = 0 ; j <m ; j++)
		{
			scanf ("%d",&c); 
			if (c > strb )
				strb = c ; 
		}

		if (strb > stra )
			printf ("MechaGodzilla\n")  ; 
		else 
			printf ("Godzilla\n")  ; 
	} 

return 0 ; 
}