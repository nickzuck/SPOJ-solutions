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
    i = inp.begin() ; 
    if (*(i)>65 && *(i)<91){cout << "Error!\n"; }
    // Checking for C++ program 
    else if(inp.find('_') != -1 ){ 
	for (i = inp.begin() ; i!= inp.end() ; i++){
		if (*(i)>65 && *(i)<91){
		    cout << "Error!\n" ; 
		    break ; 
		}
	
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
	if (i == inp.end())
	    cout << ans <<endl ;
	 
    } 

    // doing it for JAVA program
    else {
	for (i = inp.begin() ; i != inp.end() ; i++ ){
	    if (*(i+1)>65 && *(i+1)<91){ 
		ans += *i ; 
		ans += '_' ; 
		i++ ; 
		//ans +=  char((int)*(i) + 32 ) ; 
		transform (i, i+1 , i , ::tolower) ; 
		ans += *i ;  
	    }
	    else {
		if (*i != '_'){ans += *i ; } 
	    }
	}
	cout << ans <<endl ; 
    }

return 0 ; 
}