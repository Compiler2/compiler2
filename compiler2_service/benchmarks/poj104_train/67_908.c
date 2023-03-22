#define NUM_ITER 31620

#include <header.h>

int main_bench()
{
	int n,i;
	int a[100],b[100];
	double k[100]; 
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
		k[i]=(double)b[i]/a[i];
	}
	for(i=1;i<n;i++)
	{
		if((k[i]-k[0])>0.05)
		{
			my_printf("better");
			my_printf("\n");
		}
		if((k[0]-k[i])>0.05)
		{
			my_printf("worse");
			my_printf("\n");
		}
		if((k[i]-k[0])<=0.05&&(k[0]-k[i])<=0.05)
		{
			my_printf("same");	
			my_printf("\n");
		}
	}

	return 0;
}