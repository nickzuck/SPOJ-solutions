#include<iostream>
#include<algorithm>

#define MAX 1500

using namespace std ;

int main()
{
	int arr[2*MAX] , flag , n ,i , temp;
	while(1){
		cin >> n ;
		if(n == 0)
			break;
		for(i = 0 ;i<n ; i++){
			cin >> temp;
			arr[i] = temp ;
			arr[i+n] = 1400 +(1400-temp);
		}	
		sort(arr  , arr+2*n);
		int fuel = 200 ; 
		int distance = 0 ;
		for(i = 0; i<2*n;i++){
			if (fuel+distance <arr[i]){
				flag = 1 ;
				fuel = 0 ;
				break;
			}
			else{
				fuel = 200 ;	
				distance = arr[i];
			}
		}
		if(distance+fuel >= 2800){
			cout << "POSSIBLE\n";
		}
		else{
			cout << "IMPOSSIBLE\n";
		}
		/*
		cout << "Debuggin....";
		for(int i = 0 ; i<2*n ;i++){
			cout << arr[i] << " ";
		}
		cout << endl<< distance << "  " << fuel << endl;*/
	}
return 0 ;
}

