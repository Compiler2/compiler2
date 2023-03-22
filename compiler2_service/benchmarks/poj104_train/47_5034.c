#include <header.h>

int main_bench()
{
	int n,i,a[100],t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)my_scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{t=a[i];a[i]=a[n-1-i];a[n-1-i]=t;}
	for(i=0;i<n;i++)
	{my_printf("%d",a[i]);
	 if(i==n-1)break;
	 my_printf(" ");
	}
}