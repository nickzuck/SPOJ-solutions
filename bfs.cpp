#include<iostream>
#include<list>
#include<stack>


using namespace std  ; 

class Graph 
{
    private : 
	int edges   ; // for the number of edges 
	list <int> *adj ;    // denotes the adjacency list pointer 
    public : 
	Graph () ;  
	void initial (int start ) ;  // s denots the start vertex
	void  addedge (int a , int b ) ;     
	void DFS (int start , bool  []); 
}; 

Graph :: Graph (){
    cout << "Enter the number of vertices/edges " ; 
    cin >> edges ;  
    adj = new list <int> [edges]  ; 
} 

void Graph  :: initial (int start) {
    bool *visited = new bool[edges] ; 
    for (int i = 0 ; i<edges ; i++) {
        visited  = false  ;  
    }
    DFS  (start , visited ) ; 
}

void Graph :: DFS (int start, bool visited []){
    visited [start] = true ; 
    cout << start << " "  ; 
    
    list <int> :: iterator i ; 
    for  (i = adj[start].begin() ; i != adj[start].end() ; i++) {
	if (visited[start] = false ) 
	    DFS (*i , visited )  ; 
    }       
}
