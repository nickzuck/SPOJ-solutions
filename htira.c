#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX 100002

long long int push(long long int ) ; 
long long int pop () ; 

long long int stack[10] , top  ; 

int main ()
{
	long long int t , i , len ,a  , b ;
	char str[MAX]  ;
	scanf ("%lld",&t) ; 
	while (t--)
	{
		top = 1 ;
		stack [top] = -6553633 ; 
		scanf ("%s",str)  ; 
		a = 1 ; 
		len = strlen (str) ; 
		for (i= 0 ; i<len-2  ; i++)
		{
			if (str[i] > 47 && str[i] < 58)
				a = str[i] +  a*10 ; 
			if (str[i] == '*' || str[i]== '/' || str[i] == '+' || str[i] == '-')
			{
				
				if (stack[top] == -6553633)
				{
					push (a)  ;
				}

				else 
				{
					b = pop ()  ; 
					if (str[i] == '*')
					{
						a = a*b ; 
						push (a); 
						 a = 1 ; 
					}				
					if (str[i] == '+')
					{
						a = a+b ; 
						push (a); 
						 a = 1 ; 
					}
					if (str[i] == '-')
					{
						a = a-b ; 
						push (a); 
						 a = 1 ; 
					}	
					if (str[i] == '/')
					{
						a = a/b ; 
						push (a); 
						 a = 1 ; 
					}					
				}
				
			} 
		}

		a = pop () ; 
		printf("%lld\n",a)  ; 
	}
	 
return 0 ; 
}

long long int push (long long int x)
{
	top = top -1  ; 
	stack[top] = x ; 
}

long long int pop ()
{
	long long int temp ; 
	temp = stack[top]  ; 
	top = top-1  ;
	
return temp ; 
}
