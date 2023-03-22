#define NUM_ITER 46584

#include <header.h>


int main_bench()
{
	int n;int m;my_scanf("%d %d",&n,&m);
	int a[100];
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	int b[100];
	
	for(i=0;i<n;i++)
	{
		if(i<n-m)
		{
			b[i+m]=a[i];
		}
		else if(i>=n-m)
		{
			b[i-n+m]=a[i];
		}
	}
	for(i=0;i<n-1;i++){my_printf("%d ",b[i]);}my_printf("%d",b[n-1]);

	return 0;
}