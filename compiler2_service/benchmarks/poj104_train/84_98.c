#include <header.h>

int main_bench()
{
	int i,n,max1=0,max2=0,a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	    if(max1<a[i])
			max1=a[i];
	}
	my_printf("\n%d\n",max1);
	for(i=0;i<n;i++)
	{
		if(max2<a[i]&&max1>a[i])
			max2=a[i];
	}
	my_printf("%d\n",max2);
}
	    
