#include<stdio.h>
#include<string.h>

int main ()
{
	char codes[4000] ,arr[220][22] ; 
	int i , j , t ,length  , count , pass ; 
	while (1)
	{
		scanf ("%d",&t)  ; 
		if (t == 0)
			break ; 
		scanf ("%s",codes)  ;
		length = strlen(codes) ;
		//printf ("Passed from the length \n")   ; 
  		pass = 0 ; 
		count = 0 ;
		//printf ("Standing at the outer loop\n")  ; 
		for (i =0 ; pass < length-1 ; i++)
		{
			printf ("entered in the outer loop\n") ; 

			 
				for (j = 0 ; j<t ; j++)
				{
					//printf ("Code=\t%si=\t%slength=%s\t\n",codes[i]) ;
					arr[i][j]  = codes [pass]  ;
					pass ++ ; 
 				}
			count ++ ; 

		}

		//printf ("Standing at the printing point of outer loop\n")  ; 
		for (i =0 ; i <t; i++)
		{
			//printf("Entered in the outer loop\n")  ; 
			for (j = 0 ; j<count ; j++)
			{
				//printf ("Entered in the inner loop\n")  ; 
				printf ("%c",arr[j][i])  ; 
			}
		}	
	}
return 0 ; 
}