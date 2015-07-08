#include<stdio.h>
#include<string.h>

#define MAX 100002

int main ()
{
	char str[MAX] , ch ; 
	long int i , j , len , count ; 
	while ( scanf ("%s",str) != EOF)
	{
		len = strlen (str) ; 
		if (len <= 3 )
		{
			printf ("%s\n",str) ; 
		}
		
			ch = str[0]  ; 
			count = 1; 
		for (i = 1 ; i <= len ; i++)
		{
			if (str[i] == ch)
				count ++ ; 
			else if (ch != str[i])
			{
				if (count > 3)
					printf ("%d!%c",count,ch)  ; 
				
				else
				{
							for (j= 0 ; j<count ; j++)
								printf ("%c",ch); 
				}
				ch = str[i]; 
				count = 1 ; 
			
			}
			
		}
		printf ("\n")  ; 
	}

return 0 ; 
}

