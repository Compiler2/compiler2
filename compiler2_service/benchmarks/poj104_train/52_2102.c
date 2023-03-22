#define NUM_ITER 47838

#include <header.h>

main_bench()
{
int *p,m,n,i,a[200]={0};
my_scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
p=a;
for(p=a+n+m-1;p>=a;p--)
	*p=*(p-m);
for(p=a;p<a+m;p++)
	*p=*(p+n);
for(p=a;p<a+n-1;p++)
	my_printf("%d ",*p);
my_printf("%d",*p);
}