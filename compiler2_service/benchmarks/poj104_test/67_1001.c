#include <header.h>


int main_bench()
{
	int i,b,n,d,t=0;
	double a;
	int z[100],x[100];
	my_scanf("%d",&n);

	
	my_scanf("%d %d",&d,&b);
	a=1.0*b/d;
	for(i=0;i<n-1;i++){
		my_scanf("%d %d",&z[i],&x[i]);
	}
		for(i=0;i<n-1;i++){
	if((1.0*x[i]/z[i])-a>0.05){
			my_printf("better\n");
		}
		else if(a-(1.0*x[i]/z[i])>0.05){
			my_printf("worse\n");
		}
		else 
		my_printf("same\n");
	}
	return 0;

}