#include<cstdio>
#include<cmath>
#include<cstring>

#define MAX 2003

int main () 
{
  int j = 1 ;
  while (1){

    
    char str[MAX] ; 
    scanf ("%s",str) ; 
    if  ( str[0] == '-')
	break ; 
   
    int count = 0 , brc = 0 ; 
    int len = strlen(str) ; 
    for (int i = 0 ; i < len ; i++ ){
      if (str[i] == '{')
	brc ++ ; 
      else{
  	if (brc == 0)
	  count ++ ; 
	else 
	  brc -- ; 
      }
    }

    if (brc%2 == 0 )
      count += brc/2 ; 
    else 
      count += brc ; 

    printf ("%d.%d\n",j,count);
    j++ ; 

  } 

return 0 ; 
}