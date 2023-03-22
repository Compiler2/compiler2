#define NUM_ITER 50341

#include <header.h>

int main_bench()
{
	int n,i,tem;
	int *p1;
	my_scanf("%d",&n);
	p1=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&p1[i]);
	}
	for(i=0;i<n/2;i++)
	{
		tem=p1[i];
		p1[i]=p1[n-1-i];
		p1[n-1-i]=tem;
	}
	my_printf("%d",p1[0]);
	for(i=1;i<n;i++)
	{
		my_printf(" %d",p1[i]);
	}
	free(p1);
	return 0;
}