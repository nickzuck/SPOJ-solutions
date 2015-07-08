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
	for (i = 0 ;i<len ; i++){  dp[i] =0 ;} 
	dp[0] = 1  ; 

	
	for (i = 1 ;i<len ; i++){
		// considering the normal case when no 0 arrives  
	    if (str[i]>'0' && str[i] < '9' && str[i-1] != '0' ){
		long long int a = (str[i-1] -'0')*10 + str[i]-'0' ; 
		if (a <=26){
		    dp[i] =  dp[i-1] + dp[i-2] ;  
		}
		else { dp[i] = dp[i-1]; }
	    }

	    // if a 0 have already arrived 
	    else if (str[i-1] == '0' ){
		
		dp[i]= dp[i-1]; 
	    }
	    //if  a 0 have just arrived 
	    else if (str[i] == '0'){
		dp[i-1] = dp[i-2] ; 
	    }
	if (i == len -1 )
		printf ("%lld\n",dp[i]); 
	}
	
	
    }
return 0 ; 
}
