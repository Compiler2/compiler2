#include <header.h>

int main_bench()
{
	int n,a[100],t,i;
	my_scanf("%d",&n);
  	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<=(n-1)/2;i++)
	{t=a[i];a[i]=a[n-i-1];a[n-i-1]=t;}
    for(i=0;i<=n-1;i++) 
	{if(i!=n-1) my_printf("%d ",a[i]);
	else my_printf("%d",a[i]);
	}
	return 0;
}