#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 1002

inline int min (int a , int b){
	if (a < b)
		return a ; 
	else 
		return b ;
}

int main ()
{
	char str[MAX];
	int  i , even[3] , odd[3] , ans , length , temp;
	even[0] = 0 ;
	even[1] = 0 ; 
	odd[0] = 0 ; 
	odd[1] = 0 ;
	scanf ("%s",str) ;
		length = strlen(str) ;
		for (i = 0 ; i< length ; i++ ) {

			// for odd position of the string 
			if (i%2 == 0){
				//checking whether it is uppercase of lowercase
				temp = str[i] ;
				//printf ("%c",str[i]) ;
				//printf ("%d %d %d %d %d\n",even[0] , even[1] , odd[0] , odd[1] , temp) ;
				if (isupper(temp))
					odd[1] ++ ;
				else 
					odd[0] ++ ;
			}

			//for even position of the string
			else {

				//checking the case of the string
				temp = str[i] ;
				//printf ("%c",str[i]) ;
				//printf ("%d %d %d %d %d\n",even[0] , even[1] , odd[0] , odd[1] , temp) ;
				if (isupper(temp))			
					even[1] ++ ;
				else 
					even[0]++ ;
			}
		}		
		
		ans = min (even[0]+odd[1], even[1] + odd[0]) ; 
		printf ("%d\n",ans);

	
return 0 ;
}