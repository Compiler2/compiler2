#define NUM_ITER 47505

#include <header.h>

int main_bench()
{
	int a[100000],n,i,k,*p,*q;
	my_scanf("%d",&n);
	for(p=a;p<a+n;p++)
	{
		my_scanf("%d",p);
	}
	my_scanf("%d",&k);
	p=a;
	for (p=a;p<a+n;p++)
	{
		if (*p==k)
		{
			for (q=p;q<a+n;q++)
			{
				*q=*(q+1);
			}
			p--;
			n--;
		}
	}
	for (q=a;q<a+n-1;q++)
	{
		my_printf("%d ",*q);
	}
	my_printf("%d",*(a+n-1));
	return 0;
}