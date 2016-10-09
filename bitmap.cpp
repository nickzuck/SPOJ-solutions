#include<bits/stdc++.h>

using namespace std ; 

int ans[183][183] ;
int xComb[]= {0, 0 , -1 , 1};
int yComb[] = {-1 , 1, 0 , 0};
int n, m;

inline bool isValid(int x , int y){
    return ( (x >= 0 && x < n) && (y< m && y  >= 0 )) ;
}

void bfs(pair<int,int> ele){
    int x, y ;
    queue< pair<int, int> > q ;
    q.push(ele);
    while(!q.empty()){
        ele = q.front();
        q.pop() ;
        x = ele.first; 
        y = ele.second ;
        
        
        int dist = ans[x][y]+1;
        for(int i = 0 ; i < 4 ; i++){
            int xNew = x + xComb[i]; 
            int yNew = y + yComb[i]; 
            if(isValid(xNew, yNew) && dist < ans[xNew][yNew]){
                ans[xNew][yNew] = dist ;
                q.push(make_pair(xNew, yNew));

            }
        }       
        
    }
}
using namespace std ;



int main()
{
    int t ; 

    // Input
    cin >> t; 
    while(t--){
        cin >> n >> m ;
        vector<pair<int, int> > ones;
        char matrix[183][183];
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> matrix[i][j];
                if(matrix[i][j] == '1'){
                    ans[i][j] = 0 ;
                    ones.push_back(make_pair(i,j));
                }
                else
                    ans[i][j] = INT_MAX;
            }
            
        }       

        // Processing
        for(int i = 0 ; i < ones.size() ; i++){
            bfs(ones[i]);
        }
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){
                cout << ans[i][j] << " ";
            }
            cout << endl ;
        }       
    }
return 0 ;
}
