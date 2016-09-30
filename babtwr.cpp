#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std ; 

struct Box{
    int a[3] , h ; 
    
    // NOTE: The const after the parameters is necesaary
    bool operator <(const Box &other) const{
        return a[0] < other.a[0]; 
    }
};
int main(){
    int n ; 

    while(true){
        cin >> n ; 
        if( n == 0)
            break ;
        vector<Box> v ;
    
        for(int i = 0 ; i < n ; i++){
            Box temp ; 
            cin >> temp.a[0] >> temp.a[1] >> temp.a[2] ;
            sort(temp.a, temp.a+3);
            do{
                v.push_back(temp);
            }while(next_permutation(temp.a, temp.a+3)) ;
        }

        sort(v.begin(), v.end());

        int ans = 0 ; 
        for(int i = 0 ; i < v.size() ; i ++){
            v[i].h = v[i].a[2];

            for(int j = 0 ; j < i ; j++){
                if(v[j].a[0] < v[i].a[0] && v[j].a[1] < v[i].a[1]){
                    v[i].h = max(v[i].h, v[j].h + v[i].a[2]) ;
                }
            }

            ans = max(ans, v[i].h);
        }
        cout << ans << endl ;
    }
return 0 ;
}
