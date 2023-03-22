#define NUM_ITER 2352

#include <header.h>

move (int a[],int n,int m)
{
	int *p,i,q = 0;
	p = a + n - 1 ;
	for (; q < m;)
	{
		for(;p > a;p--)
		{
			i = *p;
			*p = *(p - 1);
			*(p - 1) = i;
		}
		q++;
		p = a + n - 1;
	}
}
main_bench()
{
	int n, m, *p;
	int b[10000];
	my_scanf("%d%d",&n,&m);
	for(p = b;p < b + n;p++)
	{
		my_scanf("%d",p);
	}
	move (b,n,m);
	for (p = b;p < b+n-1;p++)
	{
		my_printf("%d ",*p);
	}
	my_printf("%d",*p);
}

