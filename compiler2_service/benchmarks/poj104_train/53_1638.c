#define NUM_ITER 10489

#include <header.h>

int main_bench()
{
	int i,j,n,m,b,a[20000];
	i=0;
	my_scanf("%d\n",&n);
	for(;i<=n-1;i++)
	{
		if(i<n-1)
		my_scanf("%d ",&a[i]);
		else 
		my_scanf("%d\n",&a[i]);
	}
		for(j=0;j<n;j++)
	{
	    if(j==0)
			my_printf("%d",a[j]);
		else
		{
			for(m=0,b=0;m<j;m++)
			{
				if(a[j]==a[m])
					b++;
			}
			if(b==0)
				my_printf(",%d",a[j]);
		}
	}
	return 0;
}
