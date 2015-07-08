#include<stdio.h>
#include<conio.h>
#include <string.h>
#include<math.h>

int main ()
{
	int t , j , i , cnt [11] = {0}, fcount ,k; 
	char str [20] ;
	scanf ("%d" ,&t)  ;
	for (i =0 ; i<t ; i++) 
	{
		
		scanf ("%s",&str)  ; 
		fcount  = 0 ; 
		j= 0 ;
		while (str[j] != '\0') 
		{
			printf ("%s",str[j]); 
			if (str[j] == 0 )	{cnt [0] += 1 ; }
			if (str[j] == 1 ) 	{cnt [1] += 1 ; }
			if (str[j] == 2 )	{cnt [2] += 1 ; }
			if (str[j] == 3 ) 	{cnt [3] += 1 ; } 
			if (str[j] == 4)	{cnt [4] += 1 ; }
			if (str[j] == 5)	{cnt [5] += 1 ; }
			if (str[j] == 6)	{cnt[6] += 1 ; }
			if (str[j] == 7)	{cnt[7] +=1 ; }
			if (str[j] == 8)	{cnt [8] += 1 ; }
			if (str[j] == 9 )	{cnt [9] += 1;  }
		j++ ;
		}
		for (k = 0 ; k<=9 ; k++)
		{
			if (cnt [k] > 1 )  	fcount += pow (2,(cnt[k]-1));
		}
		if (fcount == 0)
			printf ("1\n") ;
		else 	
			printf ("%d\n",fcount) ; 
	}
	
	 	
	 
getch () ;
//return  0 ; 
}