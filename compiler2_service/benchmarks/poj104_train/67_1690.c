#include <header.h>

int main_bench()
{
	int n,i;
	double  a,b,x[5000],y[5000],z,w[5000];
	my_scanf("%d",&n);
	
	for(i=0;i<n;i++){
		my_scanf("%lf %lf",&x[i],&y[i]);
		z=y[0]/x[0];
		w[i]=y[i]/x[i];
	}
	for(i=1;i<n;i++){
		if((w[i]-z)>0.05){
			my_printf("better\n");
		}if((z-w[i])>0.05){
			my_printf("worse\n");
		}
		if((z-w[i])<=0.05&&(z-w[i])>=(-0.05)){
			my_printf("same\n");
		}
	}


        
	
	return 0;
}

