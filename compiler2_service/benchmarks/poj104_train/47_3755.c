#define NUM_ITER 54115

#include <header.h>


int main_bench()
{
	int n,i,j,a[111],b[111];
	my_scanf ("%d",&n);
	j=n-1;
	for (i=0;i<n;i++)
	{
		my_scanf ("%d",&a[i]);
		b[j]=a[i];
		j--;
	}
	for (j=0;j<n-1;j++)
	my_printf("%d ",b[j]);
	my_printf("%d\n",b[n-1]);
	return 0;
}