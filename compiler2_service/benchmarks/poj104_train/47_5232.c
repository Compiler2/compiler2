#include <header.h>

int main_bench()
{
	int i,n,t;
	int *p;
	p=(int *)malloc(sizeof(int)*100);
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&t);
        *(p+i)=t;
	}
	my_printf ("%d",*(p+n-1));
	for (i=n-2;i>=0;i--)
	{
		my_printf(" %d",*(p+i));
	}
	free(p);
	return 0;
}