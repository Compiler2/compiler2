#define NUM_ITER 196035

#include <header.h>

int main_bench()
{
	int a[300],i,j,k;
	char c;
	i=0;
	while(1)
	{
		my_scanf("%d%c",&a[i],&c);
		if(c=='\n')
		{
			break;
		}
		else
		{
			i++;
		}
	}
	int max=0;
	for(j=0;j<=i;j++)
	{
		if(a[j]>=max)
		{
			max=a[j];
		}
	}
	int q=-1;
	for(j=0;j<=i;j++)
	{
		if(a[j]>q&&a[j]<max)
		{
			q=a[j];
		}
	}
	if(q==-1)
	{
		my_printf("No");
	}
	else
	{
		my_printf("%d",q);
	}
	return 0;
}