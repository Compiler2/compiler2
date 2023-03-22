#define NUM_ITER 8020

#include <header.h>

int main_bench()
{
	int n,p=0;
	my_scanf("%d",&n);
	int a[10000];
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",a[0]);
	for(int k=1;k<n;k++)
	{
		for(int m=0;m<k;m++)
		{
			if(a[k]==a[m])
			{
				p=1;
				break;
			}
		}
		if(p==0)
			{
			my_printf(",%d",a[k]);
			}
		else
			{
				p=0;
			}
	}
	return 0;
}
