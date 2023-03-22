#define NUM_ITER 5843

#include <header.h>

int main_bench()
{
	int i,n,a[100],m;
	my_scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		my_scanf("%d",&a[0]);
		for(i=1;i<n;i++)
		{
			a[i]=a[i-1];
		}
		n--;
	}
	for(i=0;i<m-1;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[m-1]);
	return 0;
}