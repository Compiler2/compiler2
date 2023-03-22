#include <header.h>

int main_bench()
{
	int n,i,k,a[400];
	for(i=0;i<400;i++)
		a[i]=10000;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]!=10000)
		for(k=i+1;k<n;k++)
		{
			if(a[k]==a[i])a[k]=10000;
		}
		else continue;
	}
	int h=0;
	for(i=0;i<n;i++)
		if(a[i]!=10000)h++;
	for(i=0;i<n;i++)
	{
		if(a[i]!=10000){my_printf("%d",a[i]);h--;if(h)my_printf(",");}	
	}
	return 0;
}