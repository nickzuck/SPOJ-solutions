#include<cstdio>
#include <string.h>


int main ()
{
	char str1[100002]  , str2[100002]  ,arr[100002]  ;
	int  i , len1 , finalength , len2  , j , k  ; 

	while (1)
	{
		gets (str1)  ; 
		gets (str2)  ; 

		if (str1[0] == '*' && str2[0]  == '*' )	
			break ; 
		len1= strlen (str1) ; 
		len2 = strlen (str2) ; 


		// removing trailing zeros from the array 
		for (i=0  ;  i < len2 ; i++)
		{
			if (str2[i] != '0' ) 
				break ; 
		}


		// transforming str2 to arr 
		for ( j = 0; i < len2 ; j++)
		{
			arr[j]  = str2[i] ; 
			i++ ; 
		}
		len2 = j+1 ;  // length of the arr .......string required for comparison
		
		
		// REMOVING TRAILING ZEROS FROM str1 and transforming this to str2 
		for (i = 0 ; i<len1 ; i++)
		{
			if (str1[i] != '0' )
				break ; 
		}

		for (k=0 ; i<len1 ; k++)
		{
			str2[k]  = str1[i] ; 
			k++ ; 
		}

		len1 = k+1 ;  // length of the string str2 


		puts (str2) ; 
		puts (arr) ; 
		/* compare str2 (as first string ) to arr  (as second string) 
		int flag = 0 ; 
		i = 0  ; 
		while (i<len1 && i<len2 )
		{
			if (int(str2[i]) > int (arr[i]))
		}*/
	}
} 