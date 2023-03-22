#include <header.h>





int main_bench()
{
	int n,a[101]={0},b[101]={0},i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{	
		b[i]=a[n-i-1];
	}
	for(i=0;i<(n-1);i++)
		my_printf("%d ",b[i]);
	my_printf("%d",b[n-1]);
	
	
	return 0;
}

