#define NUM_ITER 26452

#include <header.h>


int main_bench()
{

	int n,i,j=0,k=0;
	double a,b,c[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%lf%lf",&a,&b);
		c[i]=b/a;
	}
	for(i=1;i<n;i++)
	{

		if(c[i]-c[0]>0.05){
			my_printf("better");
		}
		else if(c[i]-c[0]<-0.05){
			my_printf("worse");
		}
		else{
			my_printf("same");
		}
		my_printf("\n");
	}

	return 0;
}
