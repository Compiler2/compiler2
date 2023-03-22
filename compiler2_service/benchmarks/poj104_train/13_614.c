#define NUM_ITER 8987

#include <header.h>

int main_bench()
{
	int a[20000],b[20000]={0};
	int i,j,k,m=0,n;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for (i=0,j=0;i<n;i++,m=0)
	{
		for (k=j;k>=0;k--)
		{
			if (a[i]==b[k])
			{
				m=1;
				break;
			}
		}
		if (m==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	for (i=0;i<j-1;i++)
		my_printf("%d ",b[i]);
	my_printf("%d",b[j-1]);
	return 0;
}