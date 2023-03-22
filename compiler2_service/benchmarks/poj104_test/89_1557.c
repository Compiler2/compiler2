#define NUM_ITER 379

#include <header.h>

int main_bench()
{
	int a[10000],b[10000],c[10000]={0},d[10000]={0};
	int i,n;
	my_scanf ("%d",&n);
	for (i=0;i<10000;i++)
	{
		my_scanf ("%d %d",&a[i],&b[i]);
		if (a[i]==0&&b[i]==0)break;
		c[a[i]]++;
		d[b[i]]++;
	}
	for (i=0;i<n;i++)
	{
	if (d[b[i]]==n-1&&c[b[i]]==0)
	{
	my_printf ("%d",b[i]);
	break;
	}
	}
	if (i==n)
	my_printf ("NOT FOUND");
}