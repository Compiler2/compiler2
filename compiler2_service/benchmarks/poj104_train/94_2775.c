#define NUM_ITER 17898

#include <header.h>


int main_bench()
{
	int i,j,k,l,m,n,p,q,r,s,temp;
	my_scanf("%d",&n);
	j=1;
	int a[100];
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&k);
		if (k%2==1)
		{
			a[j]=k;
			j++;
		}
	}
	l=j-1;
	for (i=1;i<=l;i++)
	{
		for (j=i;j<=l;j++)
		{
			if (a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	my_printf("%d",a[1]);
	for (i=2;i<=l;i++)
	{
		my_printf(",%d",a[i]);
	}	
	return 0;
}
	