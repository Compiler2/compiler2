#define NUM_ITER 1655512

#include <header.h>

int main_bench()
{
	int num[300];
	char c;
	int i,j,temp;
	for(i=0;;i++)
	{
		my_scanf("%d%c",&num[i],&c);
		if(c!=',')
			break;
	}
	int n=i+1;
	for(i=1;i<=n-1;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			if(num[j]>num[j-1])
			{
				temp=num[j];
				num[j]=num[j-1];
				num[j-1]=temp;
			}
		}
	}
	int max=num[0],judge=1;
	for(i=0;i<n;i++)
	{
		if(num[i]<max)
		{
			judge=0;
			my_printf("%d\n",num[i]);
			break;
		}
	}
	if(judge==1)
		my_printf("No\n");
}