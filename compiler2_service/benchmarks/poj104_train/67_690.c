#define NUM_ITER 23843

#include <header.h>

int main_bench()
{
	int n,s1,e1,s2,e2,i,t=0;
	double x1,x2,c1,c2;
	my_scanf("%d",&n);
	my_scanf("%d%d",&s1,&e1);
	x1=(double)e1/s1;
	for(i=0;i<n-1;i++){
		t=0;
		my_scanf("%d%d",&s2,&e2);
		x2=(double)e2/s2;
		c1=x1-x2;
		c2=x2-x1;
		if(c2>0.05){
			my_printf("better\n");
			t=1;
		}
		if(c1>0.05){
			my_printf("worse\n");
			t=1;
		}
		if(t==0){
			my_printf("same\n");
		}
	}
	return 0;
}