#include <header.h>

int main_bench()
{
	int n,m,i,a[100],b[100]={0},*p;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=&b[0];
	for(i=m;i<n;i++)
	{
		*(p+i)=a[i-m];
	}
	p=&b[0];
	for(i=0;i<m;i++)
	{
		*(p+i)=a[n-m+i];
	}
	for(i=0;i<n-1;i++)
	my_printf("%d ",*(p+i));
	my_printf("%d",*(p+n-1));
}