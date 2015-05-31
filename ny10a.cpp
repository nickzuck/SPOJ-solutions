#include<iostream>
#include<string.h>

#define MAX 42

using namespace std ; 

int main (){
    char str [MAX]  , new_str [5] ; 
    int i , p , n , len , j  ; 
    cin >> p ;
    while (p--){
    	int arr[10] = {0} ; 
	    cin >>n ; 
	    cin >> str  ; 
	    len = strlen(str) ; 
	    for (j = 0 ;j<len-2 ; j++){
		i = j ; 
	        if (str[i] == 'T'){
		        i++ ; 
		        if (str[i] ==  'T'){
		            i++ ;
		            if (str[i] == 'T'){
		            	arr[0] ++ ; 
		            }
		            else {
		            	arr[1] ++ ; 
		            }
		        }
		        else{
		        	i ++; 
		        	if (str[i] == 'T')
		        		arr[2] ++ ; 
		        	else 
		        		arr[3] ++ ; 

		        }
	        } // completed for TTT , TTH , THT , THH

	        else{
	        	i++ ; 
	        	if(str[i] == 'T'){
	        		i++ ; 
	        		if (str[i] == 'T') 
	        			arr[4] ++ ; 
	        		else 
	        			arr[5] ++ ; 
	        	}
	        	else{
	        		i++; 
	        		if (str[i] == 'T')
	        			arr[6] ++ ; 
	        		else 
	        			arr[7] ++ ; 
	        	}

	        }
	    }
	    cout << n << " " ; 
	    for (i = 0 ;i<8 ; i++){
	    	cout << arr[i] << " " ; 
	    	if (i == 7){
	    		cout << endl ; 
	    	}
	    }
    }
return 0 ; 
}