#include<stdio.h>

int main ()
{
	int t , i ; 
	long long int a ,ans; 
	scanf ("%d",&t) ; 
	for (i = 0 ; i<t; i++)
	{
		scanf ("%lld",&a);
		ans=rev(a+1);
		printf ("%lld\n",ans) ;
	}
return 0 ;	
}

int rev (int num)
{
	int RevNum = 0 ; 
while (num !=RevNum)
{
	RevNum = 0 ;
	while (num > 0)
	{
		RevNum = RevNum*10 + (num)%10;
		num  = num/10;
	}
	if (num == RevNum)
	
		return num; 
	//	break ;
	
	else num = num +1 ; 
}
//return 0 ;
}