#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>

#define MAX 1002 

using namespace std ; 

int main ()
{
	long long int t , a , b , arr[MAX]  , i  ,count  ,per  , j ;
	scanf("%lld",&t) ; 
	for(j =1 ; j<=t ; j++)
	{
		scanf("%lld  %lld",&a , &b) ; 

		for (i =1 ; i<= b; i++)
			scanf ("%lld",&arr[i])  ; 

		sort(arr+1, arr+b+1)  ; 

		/*printf ("Array after sorting\n") ;
		for (i= 1; i <= b; i++)
		{
			printf ("%lld  ",arr[i])  ; 
		}*/
		
		count = 0 ; per = 0 ; 


		for(i= b ; i>=1 ; i--)
		{
			if (count < a)
			{
				count += arr[i]  ; 
				per ++ ; 
			}
			else 
			{
				break ;
			}
		}

		printf ("Scenario #%lld:\n" , j )  ; 
		if (count >= a)
			printf ("%lld\n" , per); 
		else
			printf ("impossible\n")  ; 

	}

return 0 ; 
}