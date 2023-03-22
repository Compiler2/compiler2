#define NUM_ITER 15265

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int *p,*q,*head;
	p=(int *)calloc(n,sizeof(int));
	head=p;
	for(p=head;p<head+n;p++)
	{
		my_scanf("%d",p);
	}
	p=head;
	my_printf("%d",*p);
	p++;
	for(;p<head+n;p++)
	{
		for(q=head;q<p;q++)
		{
			if(*q==*p)
			{
				goto chongfu;
			}
		}
		my_printf(" %d",*p);
		chongfu:;
	}
	return 0;
}

