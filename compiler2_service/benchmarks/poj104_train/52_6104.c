#define NUM_ITER 55374

#include <header.h>

int main_bench()
{
	int a[101]={0};
	int n,m;
	my_scanf("%d %d", &n, &m);
	int i,j,num=0,p,q;
	for(i=0;i<n;i++)
	{
		my_scanf("%d", &a[i]);
	}
	for(i=0;i<n-m;i++)
	{
		num=a[i];
		a[n+i]=num;
	}
	p=n-m;
	q=2*n-m;
	for(i=p;i<q-1;i++)
	{
        my_printf("%d ", a[i]);
	}
	my_printf("%d", a[q-1]);
}