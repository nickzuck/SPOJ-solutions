#include<iostream>
#include<algorithm>

#define MAX 10002
// #define int long long
// #define void int 
#define ll long long
using namespace std ;


ll  knapsack (ll value[] , ll wt[] , ll n , ll maxW);

ll knapsack (ll value[] , ll wt[] , ll n , ll maxW)
{

    ll j , w , knap[2][maxW+1] ;
    /*for (i = 0 ; i< n ; i++)
    {
        cout << value[i] << " " << wt[i] << endl ;
    }*/
    
    // Not needed as it can be done in one for loop
    /*
    for (j = 0 ; j<=n ; j++){
        knap[0][j] = 0 ;        
    }
    */

    for (j = 0 ; j<=maxW ; j++){
        knap[1][j] = 0 ; 
        knap[0][j] = 0 ;
    }

    for (j = 1 ; j<=n ; j++) {
        for (w = 1 ; w <= maxW ; w++) {
            if (wt[j-1] > w) { // we use j-1 because  the array contains the value from the 0 index
                knap[j%2][w] = knap[j%2?0:1][w-1]; /* the current weight of the item is greater than the size the knapsack can hold*/
            }

            else {
                knap[j%2][w] = max(knap[j%2?0:1][w-wt[j-1]] +value[j-1] , knap[j%2?0:1][w]) ;  /* either the item j is needed to achieve the max value or it's not needed*/
            }
        }
    }

return max(knap[0][maxW], knap[1][maxW]);
}


int main ()
{
    ll n , maxW ;  //no of bags and the maximum weight the knapsack can hold 
  //  cout << "Enter the n and Max Weight " ; 
    cin  >> maxW >> n  ; 
    ll v[n+1] , w[n+1] , i , j; // v = value of each item , w = weight of each item 
   // cout << "Enter the weight and the corresponding value of each item\n" ; 
    for (i = 0 ; i<n ; i++){
        cin >> v[i] >> w[i] ; 
    }
    
    cout << knapsack(v , w , n , maxW) << endl;

return 0 ; 
}
