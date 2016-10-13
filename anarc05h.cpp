#include<bits/stdc++.h>

#define MAX 27
using namespace std ;

char str[MAX];

inline int cint(char c){
    return (c - '0'); 
}

int solve(int leftSum , int sum, int start, int end){
    int currentSum = 0 ; 
    long long ans = 0 ; 
    int rightSum = sum ;
    for(int i = start ; i <= end ; i++){
        currentSum += cint(str[i]);
        rightSum -= cint(str[i]);
        //cout << currentSum << "   "<< leftSum << "  " << rightSum  << endl ;
        if(i == end and currentSum >= leftSum){
            ans += 1 ;
     //       cout << "if answer = " << ans << endl ;
        }
        else if (currentSum >= leftSum and currentSum <= rightSum){
            ans += solve(currentSum, rightSum, i+1, end);
       //     cout << "else ans  = "<< ans << endl ; 
        }

    } 
    
    return ans ;
}

int main()
{
    long long t = 1 ;
    while(true){
        cin >> str ; 
        if(strcmp(str, "bye") == 0)
            break ;   
        int n = strlen(str);    
        int sum = 0; 
        for(int i= 0 ;i < n ; i++){
             //cout << "cint ="  << cint(str[i]) << endl ;
             sum += cint(str[i]);
             //cout << "sum = "<< sum << endl ;
        }
        cout <<t << ". "  << solve(0, sum, 0, n-1) << endl;
        t += 1;
    }
return 0 ;
}
