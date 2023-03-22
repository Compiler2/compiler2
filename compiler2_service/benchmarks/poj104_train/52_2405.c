#define NUM_ITER 39064

#include <header.h>

int main_bench()
{
	int n,m,i;
	my_scanf("%d%d",&n,&m);
	int a[1000],*p;
	p=a;
	for(i=0;i<n;i++)
		my_scanf("%d",p+i);
	for(i=0;i<m;i++)
		*(p+n+i)=*(p+n-m+i);
	for(i=(n-1);i>=m;i--)
		*(p+i)=*(p+i-m);
	for(i=0;i<m;i++)
		*(p+i)=*(p+n+i);
	for(i=0;i<n-1;i++)
		my_printf("%d ",*(p+i));
	my_printf("%d",*(p+n-1));
return 0;
}