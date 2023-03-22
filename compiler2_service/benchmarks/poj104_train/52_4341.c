#define NUM_ITER 58234

#include <header.h>






int main_bench()
{
	int n,m,i,j,*p,a[100];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;++i)
	{
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",*(a+n-m));
	for(p=a+n-m+1;p<=a+n-1;++p) my_printf(" %d",*(p));
	for(p=a;p<=a+n-m-1;++p) my_printf(" %d",*(p));
	my_printf("\n");
	return 0;
}
