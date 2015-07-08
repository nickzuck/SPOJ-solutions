#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
int i,j,t,x,res,tmp;
char num[31];

scanf("%d",&t);

for(i=0;i<t;i++)
	{
	res = 1;
	scanf("%s",num);
	x = strlen(num);
	tmp=1;
	for(j=1;j<x;j++)
		{
		if(num[j] == num[j-1])
			tmp++;
		else
			{
			res*=pow(2,tmp-1);
			tmp=1;
			}
		}
	res*=pow(2,tmp-1);
	printf("%d\n\n",res);
	}
return 0;
}