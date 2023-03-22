#define NUM_ITER 50581

#include <header.h>

int main_bench()
{
	int n,i,*p;
	my_scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p);
		p++;
	}
	p--;
	for(;i>0;i--,p--)
	{
		if(i==n)
			my_printf("%d",*p);
		else
			my_printf(" %d",*p);
	}
	return 0;
}