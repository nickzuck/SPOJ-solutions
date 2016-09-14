#include<cstdio>
#include<cstring>

char input[5002]= "";
unsigned long long dp[5002];
int main ()
{
    scanf ("%s",input) ; 
    while(strcmp(input , "0")){
        int len = strlen(input); 
        bool error = false ;
        dp[0]= 1 ; 
        for (int i = 1; i<len ; i++){
            int temp = 0 ; 
            temp = (input[i-1]-'0') * 10 ;
            temp += (input[i]- '0') ;
        
            if(input[i] == '0' && (temp > 26 || temp == 0)){
                //printf("%c %d\n" , input[i], temp);
                error = true ; 
                break ;
            }
            if (input[i] - '0'){
                dp[i]= dp[i-1] ;
            }
            if (temp <=26 && temp > 9){
                dp[i] += dp[i-2 < 0 ?0:i-2] ;
            }
        }
        
                //printf("Input was %s\n", input);
        if(error){
            printf("0\n");
        }
        else{
            printf ("%llu\n",dp[len-1]) ;
        }
        scanf ("%s",input) ; 
    }
}
