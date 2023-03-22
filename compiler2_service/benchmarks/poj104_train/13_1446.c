#define NUM_ITER 7966

#include <header.h>


int main_bench()
{
	int n,a[100000],i,h=1,j,b[100000];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<i;j++) 
		{
			if(a[i]==a[j])
				break;
		}
		if(j==i)
		{ 
			b[h]=a[i];h++;		
		}
	}
	for(i=1;i<=h-1;i++)
	{
		if(i<h-1)my_printf("%d ",b[i]);
			else if(i==h-1) my_printf("%d",b[i]);
	}
}
