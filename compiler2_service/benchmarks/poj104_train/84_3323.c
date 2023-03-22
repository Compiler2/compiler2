#include <header.h>

int main_bench()
{
	int a[10000],n,i,max1,max2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
    
	{my_scanf("%d",&a[i]);}
    max1=a[0];
	for(i=1;i<n;i++)
	{if(a[i]>max1)
     max1=a[i];
	}
	my_printf("%d\n",max1);
	max2=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max2&&a[i]<max1)
			max2=a[i];
    }
	my_printf("%d\n",max2);
}