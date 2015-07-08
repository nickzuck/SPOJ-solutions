#include<cstdio>
#include<algorithm>

using namespace std ; 
#define MAX 10002

int main ()
{
	int t , arr1[MAX] , arr2[MAX] , i , j , n , m ; 
	scanf ("%d",&t)  ;
	while (t--)
	{
		scanf ("\n")  ; 
		scanf ("%d %d",&n,&m)  ; 
		for (i= 0 ; i<n ; i++)
			scanf ("%d",&arr1[i])  ; 
		for (j = 0 ; j<m ; j++)
			scanf ("%d",&arr2[j])  ; 
		sort (arr1 , arr1+n)  ; 
		sort (arr2 , arr2+m) ; 
		
		i = 0  ; j = 0 ; 
		while (1)
		{
			if (arr1[i] >=  arr2[j]) 
				j++ ; 
			else if (arr1[i] < arr2[j])
				i++ ;
			if (i == n )
			{
				printf ("MechaGodzilla\n")  ; 
 				break ; 
			}
			if (j == m )
			{
				printf ("Godzilla\n") ; 
				break ; 
			}
			 	 
		}

		if (i != n && j!= n)
			printf ("unpredictable\n") ; 
		
		
	}
return 0 ; 
}