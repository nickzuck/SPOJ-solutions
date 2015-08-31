#include<iostream>
#include<algorithm>
#include<cstring>
#define MAX 5002

using namespace std ; 


int main() 
{

	char str[MAX]; 
	int temp , dp[MAX] = {0}, length; 
	while (1){
		cin >> str ; 
		if (str[0]== '0')
			break ;

		//setting up dp parameters 
		dp[0]= 1 ; 
		dp[-1] = 1 ;  
		length = strlen(str);
		cout << str << endl ;
		for (int i = 1 ;i<length ; i++ ){
			temp = (str[i-1]-'0'); 
			//cout << "Temp at first stage = " << temp << endl;
			temp *= 10 ; 
			//cout << "Temp at second stage = " << temp << endl ;
			temp += str[i]-'0' ;  

			cout << "Temp = "<< temp << endl ;
			dp[-1] = 1 ; 
			if (str[i]- '0' > 0 ){ //valid single digit number
				cout << "i and  i-1 = " << i << " " << i-1 << endl ;
				cout << "dp[i] && dp[i-1] = " << dp[i] << "  "<< dp[i-1] << endl ; 
				dp[i] = dp[i-1] ; 
				if (temp > 0 && temp <27){ // for valid 2 digit number
					cout << "i and  i-2 = " << i <<" "<< i-2<< endl ;
					cout << "dp[i] && dp[i-2] = " << dp[i] << "  "<< dp[i-2] << endl ; 
					dp[i] += dp[i-2] ;
				}
			}		
		}
		cout << dp[length-1]<< endl; 
	}
return 0 ;
}
