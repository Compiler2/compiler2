#define NUM_ITER 48536

#include <header.h>

int main_bench()
{
	int a[100000],i,j,*p,*q,n,k;
	my_scanf("%d",&n);
	for(p=a,i=0;p<a+n;p++)
		my_scanf("%d",&*(p+i));
	my_printf("\n");
	my_scanf("%d",&k);
	for(p=a,q=a;p<a+n;p++)
	{
		if(*p!=k)
		{
			*q=*p;
			q++;
		}
	}
	for(p=a;p<(q-1);p++)
		my_printf("%d ",*p);
	my_printf("%d",*(q-1));
	my_printf("\n");
}
