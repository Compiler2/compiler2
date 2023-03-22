#define NUM_ITER 5109

#include <header.h>

int main_bench(){
	int m,n,e;
	my_scanf("%d",&m);
	double*za=(double*)malloc(sizeof(double)*m);
	
	for(int i=0;i<m;i++){
		my_scanf("%d",&n);
		int a=2,b=1;
		za[i]=0;
		for(int k=0;k<n;k++){
			za[i]+=1.0*a/b;
			e=a;
			a=a+b;
			b=e;
			
		}
	}
	for(int h=0;h<m;h++){
		my_printf("%.3lf\n",za[h]);
	}
	free(za);
	return 0;
}