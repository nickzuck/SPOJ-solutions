#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h >


char str1[1000000] , str2[1000000] ; 

int main ()
{
	long long int len1 , len2 , digit1  , digit2 , j  , i ; 
	while (1)
	{
		scanf ("%s%s",str1, str2) ;
		if (str1[0] == '*' && str2[0] == '*') 
			break; 
		len1 = strlen(str1) ;
		len2 = strlen (str2) ;
		digit1 = 0 ; 
		digit2 = 0 ;
			j = 0 ; 
		for (i = (len1-1) ; i>=0 ; i--)
		{
			 if (isdigit(str1[j]))
				digit1 = digit1 +  (str1[i]-48) * pow(17, j) ;
			else
				digit1 = digit1 +  (str1[i]-55 ) * pow(17, j) ;	
		j++  ; 
		}
		printf ("DIGI \t%d" , digit1) ;
			j= 0 ; 
		for (i = (len2-1) ; i >= 0 ; i-- )
		{ 
			 if (isdigit(str2[j]))
				digit2 = digit2 +  (str2[i]-48) * pow(17, j) ;
			else
				digit2  = digit2 + (str2[i]-55 ) *pow(17, j) ;
		j++ ;			
		}
		printf ("DIGIT \t %d\n",digit2) ;
		
		if (digit1 > digit2)
			printf (">\n") ;
		else if (digit1 < digit2) 
			printf ("<\n") ;
		else if (digit1 == digit2)
			printf ("=\n") ;

	}	

return 0 ;
}