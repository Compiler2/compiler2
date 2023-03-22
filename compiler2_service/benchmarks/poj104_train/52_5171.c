#include <header.h>

int main_bench()
{
	int n,m,i,*p;
	my_scanf("%d%d",&n,&m);
	p=(int*)malloc(n*sizeof(int));

	for(i=m;i<=n-1;i++)
	{
		my_scanf("%d",p+i);
	}
	for(i=0;i<m;i++)
	{
		my_scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
		my_printf("%d%c",*(p+i),(i<n-1)? ' ':'\n');
	return 0;
}