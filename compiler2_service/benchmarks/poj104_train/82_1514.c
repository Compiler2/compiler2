#define NUM_ITER 39180

#include <header.h>

int main_bench()
{
	int n,a[100],b[100],z=0,zm=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
		if(a[i]<=140&&a[i]>=90&&b[i]>=60&&b[i]<=90)
		{
			z++;
			if(i==n-1)
			{
				if(z>zm)
				{
				zm=z;
				}
			}
		}else
		{
			if(z>zm)
			{
				zm=z;
			}
			z=0;
		}
	}
	my_printf("%d",zm);
	return 0;
}
