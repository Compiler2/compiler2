#define NUM_ITER 55695

#include <header.h>

int main_bench()
{
    int a[100];
    int n,i,u,v;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	if(a[0]>a[1])
		u=a[0];v=a[1];
	if(a[0]<a[1])
		u=a[1];v=a[0];
	for(i=2;i<n;i++)
	{
		if(a[i]>u)
			u=a[i];
		if(a[i]<u&&a[i]>v)
			v=a[i];
	}
	my_printf("%d\n%d",u,v);
}