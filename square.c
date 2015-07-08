#include<stdio.h>
#include<math.h>
#include<stdio.h>

int mod_expo (long long int , long long int , long long int) ;

int main ()
{
	int t , i , j, temp ;  			/* counters and test case*/ 
	long long int a, b, m , ans , con_num;   	/*INPUT AND FINAL ANSWER VARIABLES  */
	scanf ("%d",&t) ; 
	for (j =1 ; j<=t ; j++)
	{
		scanf ("%lld%lld%lld",&a , &b,&m) ; 
		con_num = 0 ;
		i = 0 ; 
		while (b != 0 )
		{
		
			 temp = b %10 ;
			b = b / 10 ; 
			con_num = con_num + (temp*pow (3,i));
			//printf ("\nConverted Parts \t%d",con_num) ;
			i++ ; 
			//printf ("\nValue of i %d", i ) ; 
		}
	//printf ("Converted number = \t%lld", con_num) ;
	ans = mod_expo (a,con_num, m) ;	
	printf ("%lld\n",ans) ;		
		 
	}

//return 0 ; 
getch();
}

int mod_expo (long long int base  , long long int exponent , long long int  modulus )
{
	long long int result = 1,e_prime ; 
	for (e_prime = 1 ; e_prime <= exponent ; e_prime++ )
	{	
		result = fmod ((result * base ) , modulus);
	//	printf ("Result (%lld)%lld\n",e_prime,result) ; 
	}	
return result  ; 
}