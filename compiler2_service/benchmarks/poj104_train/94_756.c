#define NUM_ITER 5907

#include <header.h>

int main_bench()
{
	int n,i,a[1000],t,s=0,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{if(a[j]<a[i]){t=a[j];a[j]=a[i];a[i]=t;}}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			if(s==0)
			{s=1;my_printf("%d",a[i]);}
			else
				my_printf(",%d",a[i]);
		}
	}
	return 0;
}

