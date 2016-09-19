#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ; 
long long solve(vector<long long> arr, long long n){
    long long count = 0, temp_count = 0 , i , j ;
    while(n >= 2){
        temp_count = 0 ;
        i = 0 ; 
        j = n -1 ;
        while(i <j){

            if(arr[i] + arr[j] < arr[n]){
                temp_count += (j - i) ;
                i ++ ;
            }
            else{
                j -- ;
            }
        }
        count += temp_count ;
        n -- ;
        
    }

    return count ; 
}

int main(){
    long long n , i , j , count , temp; 
    while(true){
        vector<long long> arr ;
        cin >> n ; 
        if(n == 0)
            break ;
        for(i = 0 ; i < n ; i++){
            cin >> temp ;
            arr.push_back(temp);
        }
    
        sort(arr.begin(), arr.end());
        cout << solve(arr, n-1)<< endl;
    }
    
return 0 ;
}
