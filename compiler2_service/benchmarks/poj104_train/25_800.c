#define NUM_ITER 6550

#include <header.h>


int main_bench()
{
	int n,i,l,a[100]={0},k=0;
	my_scanf("%d",&n);
	a[0]=1;
	for (l=0;l<n;l++)
	{
		for (i=0;i<=k;i++)
		  a[i]*=2;
		for (i=0;i<=k;i++)
		{
			a[i+1]+=a[i]/10;
			a[i]=a[i]%10;
		}
		if (a[k+1]!=0) k++;
	}
	for (i=k;i>=0;i--)
		my_printf("%d",a[i]);
	my_printf("\n");
}