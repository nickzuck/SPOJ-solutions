#include<iostream>
#include<algorithm>

#define MAX 1000002
using namespace std ;

int F(int x, int pos[], int N, int C)
{
  //We can always place the first cow in the leftmost stall
  int cowsplaced=1,lastpos=pos[0];
  for(int i=1;i<N;i++)
  {
    if(pos[i]-lastpos>=x)
    {
      //We are at least x away from last placed cow
      //So we can place one here
      if(++cowsplaced==C)return 1;
      lastpos=pos[i];
    }
  }
  return 0;
}


int main()
{
    int t, n , c , pos[MAX];
    int i , j , k ; // counters
    cin >> t ;
    while(t--){
        cin >> n  >> c ; 
        for(i = 0 ; i<n ; i++){
            cin >> pos[i];
        }
        
        sort(pos, pos+n);
        int start = 0 , end = pos[n-1] - pos[0]+1, mid ;
        while(end-start > 1){
            mid = (end + start) >> 1 ;
            (F(mid, pos, n, c)? start : end)  = mid ;
        }

        cout << start << endl ;
    }

return 0 ; 
}
