#include<iostream>
#include<cmath>
#include<string.h>

typedef long long int ll 

using namespace std ; 

ll intermediate(char str[], int base){
    int len = strlen(str) , i , ret ;
    ret = 0 ;  

    for(i = 0 ;i<len ; i++){
	if(isalpha(str[i])){
	    switch (str[i]){
		case 'A' : ret+= 10*base ; 
	    }

	}
    } 
}

int main ()
{
return 0 ; 
}