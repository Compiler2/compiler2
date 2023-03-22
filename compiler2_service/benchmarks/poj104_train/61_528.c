#define NUM_ITER 55381

#include <header.h>

int main_bench()
{
	int n,i,a[100]={0};
	unsigned long f[25]={0};

	my_scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}

	f[0]=1;
	f[1]=1;
	for(i=2;i<20;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	
	
	for(i=0;i<n;i++)
	{
		my_printf("%d\n",f[a[i]-1]);
	}
	return 0;
}

