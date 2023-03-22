#define NUM_ITER 56002

#include <header.h>

main_bench()
{
	int a[10000],*b,n,m,i,j;
	my_scanf("%d""%d",&n,&m);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	b=&a[0];
	for(i=n-m;i<=n-1;i++)
	{
		my_printf("%d ",*(b+i));		
	}
	for(i=0;i<=n-m-1;i++)
	{
		my_printf("%d",*(b+i));
		if(i!=n-m-1) my_printf(" ");
	}

}