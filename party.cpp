#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int i, W, N, j ; 
    while(1){
        cin >> W >> N;
        if(W == 0 && N== 0){
            break; 
        }
        int wt[N+1], val[N+1];
        for(i = 0 ;i < N ;i++){
            cin >> wt[i] >> val[i];
        }
        int knap[N+1][W+1];
        //Processing
        for(i = 0 ; i <= N ; i++){
            for(j = 0 ;j <=W ;j++){
                if(i == 0 || j == 0){
                    knap[i][j] = 0;
                }

                else if (wt[i-1]<= j){
                    knap[i][j] = max(val[i-1] + knap[i-1][j - wt[i-1]], knap[i-1][j]);
                }

                else{
                    knap[i][j] = knap[i-1][j];
                }
            }
        }
        int best = knap[N][W];
        for(i =W ; i ; i--){
            if(knap[N][i] < best)
                break;
        }

        cout << i+1 << " " <<  knap[N][W] << endl;
    }
return 0 ;
}
