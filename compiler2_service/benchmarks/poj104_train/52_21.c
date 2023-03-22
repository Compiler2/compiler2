#define NUM_ITER 2966

#include <header.h>

int main_bench()
{
	int i,j;
	int n,m;
	my_scanf("%d%d",&n,&m);
	int *a=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",a+i);
	}
	int t,t1;
	for(j=0;j<m;j++)
	{t=a[n-1];
		for(i=0;i<n;i++)
		{
			
			t1=a[i];
			a[i]=t;
			t=t1;
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%d",a[i]);
		if(i<n-1)my_printf(" ");
	}
	return 0;
}
