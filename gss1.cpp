#include<iostream>
#include<algorithm>
#include<cstring> //For memset

#define MAX  101
#define inf 15008
using namespace std ;

int arr[MAX];
int tree[2*MAX + 1];

//function definition
//void update(int node, int a, int b, int i, int j , int value);
int query(int node , int a , int b , int i , int j);

void build_tree(int node, int a, int b);

//function to find the middle value
inline int getMid (int a , int b){
    return (a+b)/2;
}

//Find the maximum of three numbers
inline int max(int a , int b , int c){
    if (a > b){
        if(a > c)
            return a ;
        else 
            return c ;
    }
    else{
        if(b > c)
            return b ;
        else 
            return c ;
    }
}

//Build segment tree
void build_tree(int node , int a , int b){
    if (a > b){
        return ; // out of range
    }
    if(a == b){
        tree[node] = arr[a];
        return ;
    }
    int mid = getMid(a , b);
    build_tree(node*2 , a , mid);
    build_tree(node*2+1 , mid+1 , b );
    tree[node] = (tree[node*2] + tree[node*2 + 1]);
}

int queryUtil(int node , int i , int j){
    if(i == j){ //Leaf node
        return tree[node];
    }
    else{ //Other nodes
        int mid = getMid( i , j);
        int result = max(queryUtil(node*2 , i , mid) , queryUtil(node*2 + 1 ,mid+1 ,j) , tree[node]);
    }
}

//Query tree
int query(int node , int a , int b , int i , int j ){
    if(a > b || a > j || b < i)
        return -inf; // Out of range

    if(a >= i && b <= j) // Current segment is totally within range [i, j]
        return queryUtil(node , i , j); 

    int mid = getMid(a , b);
    int q1 = query(node*2, a, mid, i, j); // Query left child
    int q2 = query(1+node*2, mid + 1, b, i, j); // Query right child

    int res = max(q1 , q2);// Return final result
    
    return res;
}

//Driver Program
int main()
{
    int n ,i , l , r , m ; 
    //cout << "Enter the number of elements in the array\t";
    cin >> n ;

    //Input
    for(i = 1 ;i<=n;i++){
        cin >> arr[i];
    }
    //initializing the array
    memset(tree , 0, sizeof(tree));
    //Build Tree
    build_tree(1 , 1, n);
    cin >> m ;
    while(m--){
        cin >> l >> r ;
        cout << query(1 , 1 , n , l , r) << endl;
    }
return 0 ;
}
