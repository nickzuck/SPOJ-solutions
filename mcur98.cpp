#include<bits/stdc++.h>

#define MAX 1000002
using namespace std; 

int a[MAX] = {0};

int sodFunc(int n){
    int sum = 0 ; 
    while(n!= 0){
        sum += n%10 ;
        n /= 10;
    }

    return sum ;
}

int main()
{
    int sod ; 
    for(int i = 1; i<=MAX-3; i++){
        if(a[i] == 0)
            printf("%d\n", i);
        sod = sodFunc(i);
        if(sod + i < MAX){
            a[sod+i] = 1 ;
        }
    }
return 0 ;
}
