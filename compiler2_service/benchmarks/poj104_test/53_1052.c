#include <header.h>

int main_bench()
{
	int num[300]={0},n,i,j,flag=0,b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(num[i]==num[j])
			{
				num[j]=0;
			}
		}
	}
	my_printf("%d",num[0]);
	for(i=1;i<n;i++)
	{
		if(num[i]!=0)
		{
			my_printf(",%d",num[i]);
		}
	}
	my_printf("\n");
}