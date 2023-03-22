#define NUM_ITER 7875

#include <header.h>

int main_bench()
{
	int a[20000],b[20000];
	int n,i,j,k=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for (i=n-1;i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (a[i]==a[j])
				break;
			if (j==i-1)
			{
				b[k]=a[i];
				k++;
			}
		}
	}
	b[k]=a[0];
	for (i=k;i>0;i--)
		my_printf("%d ",b[i]);
	my_printf("%d",b[0]);
	return 0;
}