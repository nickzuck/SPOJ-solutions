#include<stdio.h>
#include<math.h>
#include<stdio.h>

long long int convert (long long int ) ;
long long int a, b, m , ans, con_num = 0  ;

int main ()
{

	int t , i  ; 
	scanf ("%d" ,&t) ; 
	for ( i = 1 ; i<=t ; i++)
	{
		scanf ("%lld%lld%lld",&a , &b, &m) ;
		convert (b) ; 
		ans =  fmod (pow (a , con_num), m ); 
	printf ("%lld\n",ans);
	}
//return 0 ;
getch () ;  
}
long long int convert (long long int num)
{
	int temp , i ; 
while (num != 0 )
	{
		
		 temp = num %10 ;
		num = num / 10 ; 
		//printf ("temp\t%dnum\t%d",temp , num) ; 
		con_num = con_num + (temp*pow (3,i));
		printf ("\nConverted Parts \t%d",con_num) ;
		i++ ; 
		printf ("\nValue of i %d", i ) ; 
	}
}