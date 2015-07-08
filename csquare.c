#include<stdio.h>
#include<math.h>

//int mod_expo (long long int , long long int , long long int) ;

int main ()
{
	int t , i , j, temp ;  			
	long long int a, b, m , ans , con_num;   
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
			i++ ; 
		}
	
		ans = 1 ; 
		a = fmod (a, m) ;
		while (con_num > 0 )
		{
			if (fmod(con_num,2)== 1)
				{
					ans = fmod ((ans *a), m ) ; 
					a = a *a ; 
					a = fmod (a , m ) ; 
					con_num >>=1 ;  
 				}
		} 		
		ans = fmod (ans , m) ;
		printf ("%lld\n",ans) ;		
		 
	}
return 0 ; 
//getch();
}
/*
int mod_expo (long long int base  , long long int exp , long long int modu )
{
	long long int ans = 1 ; 
	base = fmod (base, modu) ;
	while (exp > 0 )
	{
		if (fmod(exp,2)== 1)
			{
				ans = fmod ((ans *base), modu ) ; 
				base = base *base ; 
				base = fmod (base , modu ) ; 
				exp >>=1 ;  
 			}
	} 
	
return fmod (ans , modu ); 
}

*/

