#include<iostream>
#include<vector>
#include<algorithm>


#define MAX 102

using namespace std ;

vector<int>v1 , v2 ;

int main()
{
    int s[MAX] , n , i , j , k, result; 
    cin >> n ; 
    for (i = 0 ; i< n ; i++){
        cin >> s[i] ; 
    }
    
    for(i = 0 ; i< n; i++){
        for(j = 0 ; j < n ; j ++){
            for(k = 0 ; k < n ;k ++){
                v1.push_back(s[i]*s[j] + s[k]) ; // a*b + c
            }
        }
    }

    for(i = 0 ; i < n ; i ++){
        for(j = 0 ; j < n; j++){
            for(k = 0; k < n ; k++){
                if(s[k] != 0 ){
                    v2.push_back((s[i]+s[j])*s[k]) ; // (e+f)*d
                }
            }
        }
    }

    sort(v1.begin() , v1.end());
    sort(v2.begin(), v2.end());

    result = 0 ;
    for(i = 0 ; i < v1.size(); i++){
        int low = lower_bound(v2.begin() , v2.end() , v1[i]) - v2.begin();
        int high = upper_bound(v2.begin(), v2.end() , v1[i]) - v2.begin() ;
        result  += (high - low) ;
    }

    cout << result << endl ;


return 0 ;
}
