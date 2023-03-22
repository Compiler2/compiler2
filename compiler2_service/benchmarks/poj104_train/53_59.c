#define NUM_ITER 8992

#include <header.h>

int main_bench()
{
	int n,i,j,k=0,a[300]={0},b[300]={0};
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",a+i);
	}
	b[0]=a[0];
	for(i=0;i<=n-1;i++)
	{
		int m=0;
		for(j=0;j<=k;j++)
		{
			if(a[i]!=b[j])
				m++;
		}
		if(m==k+1)
		{
			k++;
			b[k]=a[i];
		}
	}
	for(i=0;i<=k-1;i++)
		my_printf("%d,",b[i]);
	my_printf("%d",b[k]);
}



