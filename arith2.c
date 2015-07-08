#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX 100003

int main ()
{
	long long int t , a , b  , i , len , temp,flag ; 
	char str[MAX] , ch ; 
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%s",str) ; 
		len = strlen (str)  ; 
		 a= 0 ;  temp  = 0 ; flag = 0 ; b = 0 ; 
		for (i = 0 ; i<len ; i++)
		{
			printf ("String found = %c\n",str[i])  ; 
			/* checking if = is found */
			if (str[i] == 61)
			{	if (temp != '0' && flag = )
				a = oper(a , temp ,b) ; 
				break ; 
			}
		
			/* Checking for an integer */	
			if (str[i] >47 && str[i] <58)
			{
				if (flag == 0 || flag == 1 )
				{
					a = (str[i] - '0') + a*10 ;
					flag  =1 ; 
					printf ("A=%d\n",a)  ; 
				}
				else 
				{
					b  = (str[i] - '0') + b*10 ; 
				}
			}

			if (str[i] == '+' || str [i] == '*' || str[i] == 45 || str[i] == 47)
			{
				if (flag == 1 )
				{
					temp = str[i] ; 
					flag = 2 ; 
				}

				if (flag == 3)
				{
					a = opera (a , temp , b )  ; 
					temp = str[i]  ; 
					flag =1 ; 
				}
			} 
			
		}// for ends

		printf ("Ans = %lld\n",temp )  ;  
	
	}// while ends 
return 0 ; 
}