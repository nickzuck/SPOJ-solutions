#include<stdio.h>
int main()
{
int x,y,n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&x,&y);
if((x%2)==0&&y==x)
printf("%d\n",2*x);
else if((x%2)==0&&y==(x-2))
printf("%d\n",2*x-2);
else if((x%2)!=0&&y==x)
printf("%d\n",2*x-1);
else if((x%2)!=0&&y==(x-2))
printf("%d\n",2*x-3);
else
printf("No number\n");
}
return 0;
}
