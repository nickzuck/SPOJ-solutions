#include<iostream>
#include<algorithm>
#include<cstring> //For memset
#include<climits>
#include<cmath>

#define MAX 402 
#define inf LONG_MAX
using namespace std ;

long long arr[MAX];

//function definition
//void update(long long node, long long a, long long b, long long i, long long j , long long value);
long long query(long long node , long long a , long long b , long long i , long long j, long long []);

void build_tree(long long node, long long a, long long b, long long []);

//function to find the middle value
inline long long getMid (long long a , long long b){
    return (a+b)/2;
}

//Find the maximum of three numbers
inline long long max(long long a , long long b , long long c){
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
void build_tree(long long node , long long a , long long b, long long tree[]){
    if (a > b){
        return ; // out of range
    }
    if(a == b){
        tree[node] = arr[a];
        return ;
    }
    long long mid = getMid(a , b);
    build_tree(node*2 , a , mid, tree);
    build_tree(node*2+1 , mid+1 , b, tree);
    tree[node] = (tree[node*2] + tree[node*2 + 1]);
}

long long queryUtil(long long node , long long i , long long j, long long tree [] ){
    if(i == j){ //Leaf node
        return tree[node];
    }
    else{ //Other nodes
        long long mid = getMid( i , j);
        long long result = max(queryUtil(node*2 , i , mid, tree) , queryUtil(node*2 + 1 ,mid+1 ,j, tree) , tree[node]);
    }
}

//Query tree
long long query(long long node , long long a , long long b , long long i , long long j, long long tree []){
    if(a > b || a > j || b < i)
        return -inf; // Out of range

    if(a >= i && b <= j) // Current segment is totally within range [i, j]
        return queryUtil(node , i , j, tree); 

    long long mid = getMid(a , b);
    long long q1 = query(node*2, a, mid, i, j, tree); // Query left child
    long long q2 = query(1+node*2, mid + 1, b, i, j, tree); // Query right child

    long long res = max(q1 , q2);// Return final result
    
    return res;
}

//Driver Program
int main()
{
    long long n ,i , l , r , m ; 
    long long *tree;
    long long h  ;
    //cout << "Enter the number of elements in the array\t";
    cin >> n ;

    //Input
    for(i = 1 ;i<=n;i++){
        cin >> arr[i];
    }
    h = ceil(log2(n));
    tree = new long long [ (long long) ( pow (2,  h+ 1) ) ];
    //initializing the array
    memset(tree , 0, sizeof(tree));
    //Build Tree
    build_tree(1 , 1, n, tree);
    cin >> m ;
    while(m--){
        cin >> l >> r ;
        cout << query(1 , 1 , n , l , r, tree) << endl;
    }
return 0 ;
}
