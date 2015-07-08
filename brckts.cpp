#include<iostream>
#include<string.h>

#define MAX 30002

using namespace std ; 

bool check (char str[], int len ) 
{
    int count =  0 , i ;
    for (i = 0 ; i<len ; i++){
	if (str[i] == 40 )
		count ++ ; 
	else{
	    if (count < 0 )
		count -- ; 
	    else 
		return 0 ; 
	}
    } 
    
    if (count == 0 )
	return 1 ; 

    else 
	return 0 ; 

}

int main() 
{
    char s[MAX] ; 
    int i , n , m , k, t= 10  ; 
    while (t--){
        cin >> n ; 
	cin >> s ; 
	cin >> m ; 
	while (m--){
	    cin >> k ; 
	    if (k == 0){
		bool ch = check (s , n) ; 
		if (ch ==1 )
			cout << "YES\n" ; 
		else if (ch == 0 )
			cout<<"NO\n" ;  
	    }
	    else{
		if(s[k-1] == 40)
			s[k-1] = 41 ; 
		else if (s[k-1] == 41 ) 
			s[k-1] = 40 ; 
	    }
	
	}
	
    }

return 0 ; 
}