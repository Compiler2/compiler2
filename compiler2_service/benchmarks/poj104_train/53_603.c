#define NUM_ITER 14288

#include <header.h>

del(int a[],int n)
{
	int *p,*q;
	int i =0;
	int b[10000];
	p = a+1;
	q = a;
	my_printf("%d",a[0]);
	for (;p < a + n;p++)
	{
		for(; q < p;q++)
		{
			if (*q == *p)
			{
				q = a;
				break;
			}
		}
		if (q == p)
		{
			b[i++] = *p;
			my_printf(",%d",*p);
		}
		q = a;
	}
}
main_bench()
{
	int a[10000] ;
	int n;
	int *p = a;
	my_scanf("%d",&n);
	for (;p <a+n;p++)
	{
	  my_scanf("%d",p);
	}
	del(a,n);
}