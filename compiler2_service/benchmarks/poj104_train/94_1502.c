#define NUM_ITER 18825

#include <header.h>

int main_bench()
{
	int n,a[500],b[500],i,j=0,c,l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	for(i=0;i<j;i++)
	{
		for(l=i+1;l<j;l++)
		{
			if(b[i]>b[l])
			{
				c=b[i];
				b[i]=b[l];
				b[l]=c;
			}
		}
	}
        my_printf("%d",b[0]);
	for(l=1;l<j;l++)
	{
		my_printf(",%d",b[l]);
	}
return 0;
}