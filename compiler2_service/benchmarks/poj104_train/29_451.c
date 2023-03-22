#define NUM_ITER 5245

#include <header.h>


double xs(int n){
	int e;
	int a=1,b=2;
	double sum=0;
	for(int i=1;i<=n;i++){
		if(i==1){
			sum+=(1.0*b)/(1.0*a);
		}
		else{
			e=a+b;
			a=b;
			b=e;
			sum+=(1.0*b)/(1.0*a);
		}
	}
	return sum;
}



	

int main_bench()
{
	int m;
	my_scanf("%d",&m);
	int n;
	double h;
	for(int j=1;j<=m;j++){
		my_scanf("%d",&n);
		h=xs(n);
		my_printf("%.3lf",h);
		if(j!=m){
			my_printf("\n");
		}
	}
		

	
	return 0;
}