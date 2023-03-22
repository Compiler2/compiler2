#include <header.h>


int main_bench()
{
	int n,m,i;
	my_scanf("%d%d",&n,&m);
	
	int * p,* h;
	p=(int *)malloc(sizeof(int)*n);
	h=p;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p);
		p++;
	}
	p=h;
	for(i=n-m;i<n;i++)
	{
		my_printf("%d ",*(p+i));
	}
	for(i=0;i<n-m-1;i++)
		my_printf("%d ",*(p+i));
	my_printf("%d",*(p+n-m-1));
	free(p);
	return 0;
}