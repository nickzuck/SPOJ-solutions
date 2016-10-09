#include<bits/stdc++.h>

using namespace std ;

stack<int> s ; 

int main(){
    long long  n ; 
    cin >> n ; 
    while(n > 0){
        long long arr[n+1] ;
        long long  maxArea  = 0 ; 
        long long currentArea = 0 ;
        long long  i = 0 ; 
        for(i = 0 ; i < n ; i++)
            cin >> arr[i];

        // Processing 
        i = 0 ; 
        while(i < n){
            if(s.empty() || arr[i] >= arr[s.top()]){
                s.push(i++);
            }

            else{
                long long  temp = s.top() ; 
                s.pop() ;
                currentArea = arr[temp] * (s.empty() ? i : i - s.top() - 1);
                maxArea = max(maxArea, currentArea);
            }
        }

    
        // Pop the remaining elements from the stack
        while(! s.empty()){
            long long temp = s.top() ;
            s.pop() ;
            currentArea = arr[temp] * (s.empty() ? i : i - s.top() - 1);
            maxArea = max(maxArea, currentArea);
        }
 
        // Output
        cout << maxArea << endl ;
        cin >> n ;
        
    } 

return  0 ;
}
