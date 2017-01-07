// Same solution as Codechef XORSUB with little changes

#include<iostream>
#include<vector>
#include<algorithm>

#define ull unsigned long long

using namespace std ;

// nob == number of bits in a number
int nob(ull n){
    int count = 0; 
    while(n){
        count ++ ; 
        n >>= 1 ;
    }

    return count ; 
}

int main()
{
    ull n , k, t ;
    ull i,  temp,j ;    
        cin >> n  ; 
        ull arr[n], bits[n];
        for(i = 0 ; i < n ; i++){
            cin >> arr[i] ; 
            bits[i] = nob(arr[i]) ;
        }

        //put all the bits of same length in the same bucket 
        vector<ull> buckets[65] ;
        for(i = 0 ; i <n ;i++){
            buckets[bits[i]].push_back(arr[i]);
        }
        
        // take a number from the bucket and xor it with all the 
        // numbers in the bucket
        ull modified[100], mIndex ; 
        mIndex = 0 ;
        for(i = 64 ; i > 0 ; i--){
            if(buckets[i].size()){
                modified[mIndex++] = buckets[i][0];
            
                //xor all the numbers in the bucket with this numbers
                // and put the xor resutls in their corresponding buckets
                for(j = 1 ; j<buckets[i].size(); j++){
                    ull temp = buckets[i][0]^buckets[i][j];
                    buckets[nob(temp)].push_back(temp) ;
                    
                }
            }
        }
        
        // check for the elements which must be taken for the maximum xor
        ull ans = 0 ; 
        for(i = 0 ; i<mIndex ; i++){
            if(ans < (ans^ modified[i])){
                ans = ans ^ modified[i] ; 
            }
        }


        cout << ans << endl ;

      
return 0 ;
}
