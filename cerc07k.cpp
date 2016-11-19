#include<bits/stdc++.h>

using namespace std ;

class Node{

  public:
    int x , y, mask, weight ;

    Node(int x, int y , int mask, int weight){
        this->x = x ;
        this->y = y ;
        this->mask = mask ;
        this->weight = weight ;
    }
    Node(){}
    
};

map<char, int> keys =  {{'r', 1}, {'y', 2}, {'b', 4}, {'g', 8}}; 
map<char, int> doors =  {{'R', 1}, {'Y', 2}, {'B', 4}, {'G', 8}}; 
bool visited[102][102][16];
char mat[102][102];
int r, c;

inline bool isWall(int i, int j){
    return mat[i][j] == '#';
}

inline bool isEnd(int i, int j){
    return mat[i][j] == 'X';
}

inline char val(int i, int j){
    return mat[i][j];
}

void bfs(Node current){
    bool reached = false ;
    queue<Node> q ;
    q.push(current);
    while(! q.empty()){
        current = q.front();
        q.pop();

		if (current.x<0) continue;
		if (current.y<0) continue;
		if (current.x>=r) continue;
		if (current.y>=c) continue;
    
        // Movement to the  walls is not allowed
        if(isWall(current.x , current.y)){
            continue;
        }

        // If this is the end, then we have reached our goal
        if(isEnd(current.x, current.y)){
            reached = true ;
            break;
        }

        // Mark the found keys
		
        map<char,int>::iterator it;
        it = keys.find(val(current.x, current.y));
        if(it != keys.end()){
            current.mask |= it->second ;
        }
		

        // if the current state was not visited before
        // then mark it 
        if(visited[current.x][current.y][current.mask])
            continue;

        // If there is door and we don't have any key , 
        // then try to find the key by going to some other key
        // and this state is irrelevent for us
      
        it = doors.find(val(current.x, current.y));
        if(it != doors.end() and !(current.mask &it->second)){
            continue;
        }
      
        
        // Mark the current state as visited 
        visited[current.x][current.y][current.mask] = true;

        q.push(Node(current.x +1, current.y, current.mask, current.weight +1));
        q.push(Node(current.x -1 ,current.y, current.mask, current.weight+1));
        q.push(Node(current.x, current.y + 1 , current.mask, current.weight+1));
        q.push(Node(current.x, current.y -1, current.mask, current.weight+1));
    }
    if(reached){
        cout << "Escape possible in " << current.weight <<  " steps.\n";
    }
    else
        cout << "The poor student is trapped!" << endl;
}


int main()
{
    int ans; 
    char ch;
	while(true){
		cin >> r >> c;
		if (r== 0 and c== 0)
			break;
		Node current ; 
		//long long limit = r*C ;
		for(int i = 0 ; i < r ; i++){
		    for(int j = 0 ; j<c ; j++){
		        cin >> ch ; 
		        mat[i][j]= ch;
		        if(ch == '*'){
		            current.x =  i ;
		            current.y = j ;      
		        }
		        
		    }
		}

		current.mask  = 0 ;
		current.weight = 0 ;
		memset(visited, false, sizeof(visited));
		bfs(current);
	}
return 0 ;
}
