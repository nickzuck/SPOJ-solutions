#include <stdio.h>
#include <string.h>
#include<ctype.h>

#define MAX 102

int main() {

	char in[MAX] , out [MAX] ; 
	int i , j , len , flag ; 
	
	scanf ("%s",in) ;

	i = 0 ;  j = 0 ; len = strlen (in) ; 
	flag = 0 ; 
	// converting from C++ to JAVA 
	if(strstr(in , "_")){
		
		for (i = 0 ; i<len ; i++){
			if (in[i]=='_'){
				flag = 1 ; 
			}
			else {
				if (flag){
					flag = 0 ;
 					out[j] = toupper(in[i]) ; 
					j++ ; 
				}
				else{
					out[j] = in[i] ; 
					j++ ; 	
				}
			}
		}
	}

	// from JAVA to C++ 
	else {
		for (int i = 0 ; i<len ; i++){
			if (isupper(in[i])){
				flag = 0 ; 
				out[j]= '_' ; 
				j++ ;
				out[j] = tolower(in[i]) ; 
				 j++ ; 
			}
			else {
				out[j] = in[i] ;
				j++ ; 
			}
		}
		
	}
        j-- ; 
	printf ("%s",out); 
return 0;
}




/*
    const char *str = "/user/desktop";
    const int exists = strstr(str, "/abc/") || strstr(str, "/abc\0");
    printf("%d\n",exists);*/
    

