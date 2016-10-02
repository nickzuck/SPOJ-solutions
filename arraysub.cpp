#include<iostream>
#include<algorithm>
#include<vector>

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
    // Store the sum of first k elements
    m = 0 ;
    for(i = 0 ; i < k ; i++){
        m = max(v[i], m);
    }
    print(m);
    // Use Sliding window algo to find the next n-k maxs
    for(;i < n; i++){
        m = max(v[i], m);
        print(m);
    }
return 0 ;
}
