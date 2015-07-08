#include<stdio.h>
#include<string.h>

int main ()
{
	int i , j , flag , n ,ptr , cor; 
	char arr[202][202]  , str[202]  ; 
	while (1)
	{
		
	scanf ("%d",&n)  ; 
	if (n==0 )
		break ; 
	scanf ("%s",str) ;
 	i = 0 ; j = 0 ; ptr = 0  ; flag  = 0 ; 
	cor = 0 ; 
	while(str[ptr] != '\0')
	{
	// input in the array in +ve direction 
		if (flag == 0)
		{
			arr[i][j] =  str [ptr]  ; 
			j ++ ; ptr ++ ; 
			if (j ==n) // change the direction to -ve 
			{
				flag =1 ; 
				j = n-1 ;		
				i++ ; 
				cor ++ ; 
			}	
		}

		if (flag ==1 ) // traversing the array in -ve direction
		{
			arr[i][j] = str[ptr]  ; 
			ptr ++ ; j-- ;
			if (j ==-1) // change the direction to +ve 
			{
				flag =0 ; 
				j = 0 ;		
				i++ ; 
				cor ++ ; 
			}	
		
		}
	}//while ends

	for (j = 0 ; j<n ; j++)
	{
		for (i = 0 ; i<cor ; i++)	
			printf ("%c",arr[i][j]) ; 
	}
	printf ("\n")  ;
	} // end of the input while ends 
return 0 ; 
}