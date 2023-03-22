#include <header.h>

int main_bench()
{
	int i,n,*p;
	my_scanf("%d",&n);
	p=(int *)(malloc(n*sizeof(int)));
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p+i);
	}
	for(i=n-1;i>0;i--)
	{
		my_printf("%d ",*(p+i));
	}
	my_printf("%d",*(p+i));
}