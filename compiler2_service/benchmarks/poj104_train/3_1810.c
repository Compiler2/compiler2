#include <header.h>

int main_bench()
{
int i,j,n,k,a=0;
my_scanf("%d",&n);
my_scanf("%d",&k);
int *sz=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
		
	}
for(i=0;i<n;i++)
{
	
	for(j=0;j<n;j++)
		{if(j==i)
		{continue;}
	
		if((sz[i]+sz[j])==k)
		{a++;}}
}
if(a>0)
{my_printf("yes");}
if(a==0)
{my_printf("no");}
	return 0;
}