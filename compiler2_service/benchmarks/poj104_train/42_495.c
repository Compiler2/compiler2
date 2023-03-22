#define NUM_ITER 46514

#include <header.h>

int main_bench()
{
	int a[200000],b=0,n,i,j,k;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		{
			b++;
			for (j=i+1;j<n+1;j++)
				a[j-1]=a[j];
			i--;
		}
	}
	for (i=0;i<n-b-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-b-1]);
	return 0;
}