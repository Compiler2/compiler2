#define NUM_ITER 52794

#include <header.h>

int main_bench()
{
	int n,m,a[100],k,t,u,i,h;
	my_scanf("%d %d",&n,&m);
    my_scanf("%d",&a[0]);
	for(k=1;k<=n-1;k++)
		my_scanf(" %d",&a[k]);
	if (m==1)
	{
		my_printf("%d",a[n-m]);
	for(i=0;i<=n-2;i++)
		my_printf(" %d",a[i]);
        my_printf("\n");
	}
	else if (m==n)
	{
		my_printf("%d",a[0]);
		for(t=1;t<=n-1;t++)
			my_printf(" %d",a[t]);
		my_printf("\n");
	}
	else 
	{
		my_printf("%d",a[n-m]);
		for(h=n-m+1;h<=n-1;h++)
			my_printf(" %d",a[h]);
		for(u=0;u<=n-m-1;u++)
			my_printf(" %d",a[u]);
	}
	my_printf("\n");
}
	
