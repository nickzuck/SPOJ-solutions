#include<stdio.h>
#include<conio.h>

int ma [1002] , wa[1002] ; 

int main ()
{
	int t , n;
	int sum , i , j ;

	scanf ("%d",&t) ; 
	for (i = 0 ; i< t ; i++)
	{
		scanf ("%d",&n ); 
		for ( j = 0 ; j <n ; j++)
			scanf ("%d", &ma[j]);
			sort (n , ma) ;
		for ( j = 0 ; j <n ; j++)
			scanf ("%d" , &wa[j]) ;
			sort (n , wa);
 
		sum = 0 ; 
		for ( j =0 ; j<n ;j++)
		{
			//printf ("Male = %d\t women = %d\t",ma[j],wa[j]) ;
			sum = sum + (ma [j] * wa[j]) ; 
		}

	printf ("%d\n" ,sum) ; 
	}
return 0 ; 
}

 int sort(int m, int x[ ])
   {                                                           
       int i, j, t;                                            
                                                               
       for(i = 1; i <= m-1; i++)                               
          for(j = 1; j <= m-i; j++)                             
             if(x[j-1] >= x[j])                                
             {
                t = x[j-1];                                    
                x[j-1] = x[j];                                 
                x[j] = t;                                      
             }                                                 
return 0 ;   
}                                                 
                   

