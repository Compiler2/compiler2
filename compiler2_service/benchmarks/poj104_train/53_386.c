#define NUM_ITER 5946

#include <header.h>

int main_bench()
{
	int a[300],i,n,b[300],j,k,m;
	my_scanf("%d",&n);
	m=1;
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		k=i;
		for(j=0;j<i;j++)
		{
			if(a[j]!=a[i])
				k=k-1;
			else k=k;
			if (k==0)
			{
				b[m]=a[i];
				m++;
			}
		}
	}
		for(i=0;i<m-1;i++)
			my_printf("%d,",b[i]);
		my_printf("%d",b[m-1]);

}