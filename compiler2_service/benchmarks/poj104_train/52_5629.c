#include <header.h>


int main_bench()
{
	int a[105];
	int n,m;
	my_scanf("%d %d",&n,&m);
	for (int *w=a+m,i=0;i<n-m;i++,w++)
	{
		my_scanf("%d",w);
	}
	for (int *w=a,i=0;i<m;i++,w++)
	{
		my_scanf("%d",w);
	}
	for (int *r=a,i=0;i<n-1;i++,r++)
	{
		my_printf("%d ",*r);
	}
	my_printf("%d",*(a+n-1));
	return 0;
}