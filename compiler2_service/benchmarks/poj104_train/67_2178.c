#define NUM_ITER 25619

#include <header.h>

int main_bench()
{int n,i;
	double a,b,c[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){my_scanf("%lf %lf",&a,&b);c[i]=b/a;}
	for(i=1;i<n;i++){if(c[i]-c[0]>0.05)my_printf("better\n");
		else if(c[0]-c[i]>0.05)my_printf("worse\n");
		else{my_printf("same\n");}}

    
}