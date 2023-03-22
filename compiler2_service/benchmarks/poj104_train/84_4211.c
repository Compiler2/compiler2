#define NUM_ITER 56047

#include <header.h>

int main_bench()
{
	int n,i,j,k,l,max,max2,smax;
	int a[100];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
		max=a[0],max2=0;
		for(j=0;j<=n-1;j++)
		{
			if(a[j]>max)
				max=a[j],max2=j;
		}
		k=a[n-1];
		a[n-1]=a[max2];
		a[max2]=k;
		smax=a[0];
		for(l=0;l<=n-2;l++)
		{
			if(a[l]>smax)
				smax=a[l];
		}
		my_printf("%d\n%d\n",max,smax);
}