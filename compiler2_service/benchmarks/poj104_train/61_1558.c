#define NUM_ITER 5661

#include <header.h>

int F(int n);
int main_bench()
{
	int n,x,i;
	int p[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&x);
		p[i]=F(x);
        my_printf("%d\n",p[i]);
	}
	return 0;
}
int F(int n)
{
	int a[1000];
	a[0]=0;
	a[1]=1;
	int i;
	for(i=2;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
	if(i==1)
		return 1;
	else
		return a[n];
}