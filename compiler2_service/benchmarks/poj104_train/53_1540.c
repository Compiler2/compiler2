#define NUM_ITER 8008

#include <header.h>


int main_bench()
{
	int n,a[300],i,j;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if((a[i]!=a[0]&&i!=0)||i==0)
		{
		if(i==0)
		my_printf("%d",a[i]);
		else
		my_printf(",%d",a[i]);
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=a[0];
			}
		}
		}
	}
}