#define NUM_ITER 37402

#include <header.h>

int main_bench()
{
	int n,a[100],i,b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=1;i<n;i++)
	{
		if(1.0*b[i]/a[i]-1.0*b[0]/a[0]>0.05){
			my_printf("better\n");
		}else{
			if(1.0*b[0]/a[0]-1.0*b[i]/a[i]>0.05){
				my_printf("worse\n");
			}else{
				my_printf("same\n");
			}
		}
	}
	return 0;
}