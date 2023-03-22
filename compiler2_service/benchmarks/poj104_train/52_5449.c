#define NUM_ITER 43880

#include <header.h>

int main_bench()
{
	int n=0,m=0;
	my_scanf("%d %d\n",&n,&m);
	int a[200];
	for(int i=1;i<=n;i++)
	my_scanf("%d ",&a[i]);
	for(int j=n;j>=1;j--)
	a[j+m]=a[j];
	for(int b=1;b<=m;b++)
	a[b]=a[n+b];
	for(int c=1;c<=n;c++)
	{
		if(c!=n)
		my_printf("%d ",a[c]);
		else
		my_printf("%d",a[n]);
	 } 
	return 0;
}