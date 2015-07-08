#include<stdio.h>

struct name
{
	int n, m ; 
}value[10000] ;

int rev(int *) ;
int add (int , int);

int main ()
{
	int t,i,sum[10000];
	scanf ("%d",&t);
	for (i = 0 ; i < t; i++)
	{
		scanf ("%d%d",&value[i].n,&value[i].m);
		rev(&value[i].n);
		rev(&value[i].m);
		sum[i]=add (value[i].n , value[i].m);
		rev(&sum[i]);
	}
	for (i=0 ; i<t ; i++)
	{
		printf ("%d\n",sum[i]);
	}
return 0 ; 
}

int rev (int * num)
{
	int RevNum = 0 ; 
	while (*num > 0)
	{
		RevNum = RevNum*10 + (*num)%10;
		*num  = *num/10;
	}
	*num = RevNum; 
return 0 ;
}

int add (int a , int b )
{	
	int sumofnum ;
	sumofnum = a +b;
	return sumofnum;
}