#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	long long int a , i ,var ; 
	char b , c ; 
	b = '3'  ; 
	c=  '.'  ; 
	printf ("%c%c",b ,c )  ; 
	a= 167594143 ; 
	for (i =2 ; i<200 ; i++)
	{
		a = a*10 ; 
		//printf ("aMul = %d\n",a)  ; 
		var = a / 78256779 ; 
		a = a%78256779 ; 
		//printf ("amod = %d\n",a)  ; 
		printf ("%d", var)  ; 
	} 	
	
	
//return 0 ; 
getch ()  ;  
}