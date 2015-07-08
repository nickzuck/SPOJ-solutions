#include<cstdio>
#include<cmath>

using namespace std ; 

#define MAX 100002

int main () 
{
  int top , i ,j , n , stack [MAX],num, flag = 1; 
  
  i = 1 ;  top = 1  ; 
  while (1) {
    //getting the number of trucks 
    scanf ("%d",&n);
    if (n == 0 )
      break ; 

    while (n--){
      scanf ("%d",&num)  ; 
      if (num != i){
        stack[top++] = num ; 
      }
    
      else{
        i++ ; 
      }
    }
  
    top -- ; 
    for (j = top ; j>=1 ; )
    {
      int temp = stack[j] ;
      j-- ;  
      if (temp == i)
        i++ ; 
      else {
        flag = 0 ; 
        printf ("no\n") ; 
      }
    }
    if (flag)
      printf ("yes\n") ; 
 }
return 0 ; 
}