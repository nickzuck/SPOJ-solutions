#include<cstdio>
#include<cmath>

using namespace std ;

#define MAX 10002

int main ()
{
	int i , j , temp , num , stack [MAX] , n , top ;
	while (1)
	{
		int flag = 1 ;  	// setting the flag to check for the execution (assuming 'yes')
		scanf ("%d",&n) ;	
		if (n == 0)
			break ; 
		i = 1 , top = 0; 	//getting the top for stack and i for comparing the series of trucks
		while (n--)
		{
			scanf ("%d",&num)  ; 
			if (num != i)		// if truck number doesn't follow the sequence put it in the stack
			{
				stack [top] = num ;
				top ++ ; 
			}
			else if (stack[top] == i) // if that truck is need and it is at the top of the stack
			{
				top-- ; 
				i++ ; 
			}
			else 			//else increment the sequence counter 
			{
 				i++ ;
			}
		}
		while (top --)
		{
			//printf ("%d\t",stack[top])  ; 
			int pop = stack[top] ; 
			if (pop != i)
			{
				flag = 0  ; 
				printf ("no\n") ;
				break ; 
			}
			else
			{
				i++ ; 
			}
		}
		if (flag)
			printf("yes\n"); 
	} 

return 0 ;
}