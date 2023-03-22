#define NUM_ITER 50679

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
	{
		int x;
		my_scanf("%d",&x);
		a[i]=x;
	}
	int *pi=a;
	int *pj=a+n;
	int t;
	for(;pi<pj;pi++,pj--)
	{
		t=*pi;
		*pi=*pj;
		*pj=t;
	}
	for(int k=1;k<n;k++)
	{
		my_printf("%d ",a[k]);
	}
         my_printf("%d",a[n]);
	return 0;
}
