#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>

using namespace std ;

inline void print(int n){
    cout << n << " ";
}

int main()
{

    vector<int> v ;
    int n, i, m,k,temp ; 

    // Input
    cin >> n; 
    for(i = 0 ; i < n ; i++){
        cin >> temp ;
        v.push_back(temp);
    }
    cin >> k ;

    // Processing
    deque<int> window ; 
    // Add first k elements to the queue
    for(i = 0 ; i < k ; i++){
        // Remove the previous smaller elements from the queue
        while( !window.empty() && v[i] >= v[window.back()]){
            window.pop_back() ;
        }

        window.push_back(i);
    }
    
        print(v[window.front()]);
    // Use Sliding window algo to find the next n-k maxs
    for(;i < n; i++){
        
        while(!window.empty() && window.front() <= i-k){
            window.pop_front();
        }

        while( !window.empty() && v[i] >= v[window.back()]){
            window.pop_back() ;
        }

        window.push_back(i) ;
        print(v[window.front()]);
    }
return 0 ;
}
