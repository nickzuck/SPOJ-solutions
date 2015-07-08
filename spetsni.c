#include<stdio.h>


int main ()
{
struct coord
{
	int x,y ; 	
}a[100] ;

	int no , t , i ;
	scanf ("%d",&t);
	for (i=0 ;i<t ;i++ )
	{
		scanf ("%d%d",&a[i].x,&a[i].y);
	}

	for (i=0 ; i < t ; i++)
	{
		if (a[i].x == a[i].y || a[i].y == (a[i].x -2))
		{
			if (a[i].x %2 == 0 )
			{
				no = a[i].x + a[i].y ;
			}
			else
			{
				no = a[i].x + a[i].y -1 ;
			} 
		printf("%d\n",no) ;	
		}
		else
		{
			printf ("No Number\n");
		}
	}
return 0 ;
//getch ();
}