#include<cstdio>
#include<string.h>
#include<cmath>

#define MAX 5002

//using namespace std ; 

int main (){
    char str[MAX] ;
    long long int dp[MAX] , i , len  ; 
    while(1) {
        scanf("%s",str) ; 
	if (*str == '0') 
	    break ; 
	len = strlen(str) ;  //getting the length of the string 

	//setting the dp parameters 
	dp[-1] = 1 ; 
	/*for (i = 2 ;i<len ; i++){  dp[i] =0 ;} */
	dp[0] = 1  ; 

	
	for (i = 1 ;i<len ; i++){
	    long long int a = (str[i-1] -'0')*10 + str[i]-'0' ;
	   /* if (!strcmp(str , "502")){printf ("str[i]= %d and a = %d\n", str[i] , a ) ; }*/
	    
	    if (str[i]!='0' && str[i-1]!='0' && str[i+1]!='0' &&  a <27)
	    {
		dp[i] = dp[i-1] + dp[i-2] ; 
		if (!strcmp(str , "502")){
		    printf ("in last else part\n") ; 
		}
	    }
	    else if (a>=27 && str[i] == '0'){
 		dp[len-1] = 0 ; 
		i= len ; 
		//printf ("We are in invalid case \n")  ;  
	    }
	    else {
		dp[i] = dp[i-1] ; 
		/*if (!strcmp(str , "502")){
		    printf ("in last else part\n"); 
		}*/
	    }
	}
	    
	 
	printf("%lld\n",dp[len-1]) ; 
    }
return 0 ; 
}
