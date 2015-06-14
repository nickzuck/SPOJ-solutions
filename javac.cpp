#include<iostream>
#include<string>
#include<algorithm>

using namespace std  ; 


int main ()
{
    string inp ; 
    cin>> inp ;  
    //cout << inp ; 
    string :: iterator i;  
    string ans; 
    int flag = 0 ; 

    // Checking for C++ program 
    if(inp.find_first_of('_') > 0 ){ 
	for (i = inp.begin() ; i!= inp.end() ; i++){
	        if (*i == '_'){
		    flag = 1 ; 
		}
		else {
		    if (flag == 0 )
		        ans += *i ; 
		    else {
			 //string temp   ; 
			 //ans += char((int)*(i) -  32 );
			 transform (i, i+1 , i , ::toupper) ;   
			 ans += *i ; 
			 flag =  0 ;  
			 
		    }
		}
	}
	cout << ans <<endl ; 
    } 
    else {
	for (i = inp.begin() ; i != inp.end() ; i++ ){
	    if (isupper(*(i+1))){
		cout << "Yes it is upper \n" ; 
		ans += '_' ; 
		ans += *i ; 
	    }
	    else {
		ans +=  char((int)*(i) + 32 ) ; 
	    }
	}
	cout << ans <<endl ; 
    }

return 0 ; 
}