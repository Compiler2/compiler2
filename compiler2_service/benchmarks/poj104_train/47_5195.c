#include <header.h>

int main_bench()
{
	int i,n;
	my_scanf("%d",&n);
	int a[100];
	int *p=a;
	int *e=p+(n-1);
	for(i=0;i<n;i++,p++)
 		my_scanf("%d",p);
	for(i=0;i<n-1;i++,e=e-1)
		my_printf("%d ",*e);
	my_printf("%d",*e);
}