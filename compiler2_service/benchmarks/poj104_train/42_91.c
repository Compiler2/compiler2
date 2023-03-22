#define NUM_ITER 56783

#include <header.h>

int main_bench()
{
	int a[100000],n,k,i,j;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
    for(i=0;i<=n-1;i++)
	{	if(a[i]!=k)
		{my_printf("%d",a[i]);
		break;}
	}
		for(j=i+1;j<=n-1;j++)
		{if(a[j]!=k)my_printf(" %d",a[j]);
		}
}