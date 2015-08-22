#include<iostream>
#include<cmath>
#include<cstring>

#define MAX 202
using namespace std ; 

int main ()
{
	int cols , rows , i , j , k ; 
	char string[MAX] ;

	cin >> cols ; 
	while (cols){
//		if (cols == 0) 
//			break ; 
		cin >> string ;  
		//cout <<" rows = " << rows << " cols = " << cols ; 
		int length = strlen(string) ;

		rows = length / cols ;

		char original [rows][cols] ; 
		k = 0 ; 

		//cout <<" rows = " << rows << " cols = " << cols <<"length = " << length ; 
		for (i = 1 ; i<=rows ; i++){			

			// fill the array by moving from left to right
			if (i%2 == 1){ 
				for (j = 1 ; j<=cols ; j++){
					original[i][j] = string[k++] ; 
				}
			}

			//fill the array by moving from right to left
			else {
				for (j = cols ; j>0 ; j--){
					original[i][j]= string[k++] ;
				}
			}
		
		}

		cout << original << endl;
		//print the original string to the screen
		for (j = 1 ; j <= rows+1 ; j++) {
			for (i = 1 ; i<=cols+1 ; i++){
				cout << original[i][j] ; 
			}	
		}
		cout << "\n" ; 
		cin >> cols ; 
	}
return 0 ; 
}
