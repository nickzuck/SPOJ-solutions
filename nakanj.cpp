#include<bits/stdc++.h>

#define mp make_pair 
#define pb push_back 
using namespace std; 

static int maxi = INT_MAX ;
pair<int, int> source, destination ; 
bool visited[9][9] ; 

bool canDo(int x, int y){
    return (x<9 and y < 9 and y >0 and x > 0 and !visited[x][y]) ? 1 : 0; 
}


int bfs(){
    queue<pair<pair<int, int>, int> > q ; 
    pair<pair<int, int>, int> node ;
    q.push(mp(source, 0)) ;
    int currX , currY ;
    while(!q.empty()){
        node = q.front() ;
        q.pop();
        currX = node.first.first ;
        currY = node.first.second ; 
        //cout << currX << "    " << currY << endl ;
        visited[currX][currY] = 1;
        int temp = node.second ;
        if(node.first == destination){
            maxi = min(maxi, node.second) ; 
        }
        if(canDo(currX+1, currY+2)) {
            q.push(mp(mp(currX+1, currY+2), temp+1)) ;
            visited[currX+1][currY+2] = 1 ;
        }
        if(canDo(currX+2, currY+1)){
            q.push(mp(mp(currX+2, currY+1), temp +1)) ; 
            visited[currX+2][currY+1] = 1 ;
        }
        if(canDo(currX+2, currY-1)){
            q.push(mp(mp(currX+2, currY-1), temp+1)) ; 
            visited[currX+2][currY-1] = 1 ;
        }
        if(canDo(currX+1, currY-2)){
            q.push(mp(mp(currX+1, currY-2), temp+1)) ;
            visited[currX+1][currY-2] = 1;
        }

        if(canDo(currX-1, currY+2)){
            q.push(mp(mp(currX-1, currY+2), temp+1)) ;
            visited[currX-1][currY+2] = 1 ;
        } 
        if(canDo(currX-2, currY+1)){
            q.push(mp(mp(currX-2, currY+1), temp+1)) ; 
            visited[currX-2][currY+1] = 1;
        }
        if(canDo(currX-2, currY-1)){
            q.push(mp(mp(currX-2, currY-1), temp+1)) ;
            visited[currX-2][currY-1] = 1;
        } 
        if(canDo(currX-1, currY-2)){
            q.push(mp(mp(currX-1, currY-2), temp+1)) ; 
            visited[currX-1][currY-2] = 1;
        }

    }
    cout << maxi << endl ;
    return maxi ;
}

int main()
{
    int t, v ;
    char k ;
    cin >> t;
    while(t--){
        maxi = INT_MAX ;
        memset(visited, 0, sizeof(visited));
        cin >> k >> v ; 
        source = mp (k -'a'+1, v);
        cin >> k >> v ;
        destination = mp( k-'a' +1, v);
        //cout << source.first << source.second << endl;
        //cout << destination.first << destination.second << endl ;
        bfs();
    }
return 0 ;
}
