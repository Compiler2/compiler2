#define NUM_ITER 47856

#include <header.h>

int main_bench()
{
	int n,i,a[100],k,b[100],j;
	my_scanf("%d",&n);
	for (i=1;i<=100;i++)
		a[i]=0;
	j=1;
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&k);
	
		if (a[k]==0) {
			b[j]=k;
			j++;
		}
		a[k]=1;
	}
	for (i=1;i<(j-1);i++)
		my_printf("%d ",b[i]);
	my_printf("%d",b[j-1]);

	return 0;
}