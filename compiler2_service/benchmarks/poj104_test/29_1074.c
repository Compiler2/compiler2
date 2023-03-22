#define NUM_ITER 5157

#include <header.h>

int main_bench(){
	int q[100];
	double s[100];
	int i=0;
	int j=0;
	int m;
	int a=2;
	int b=1;
	int e;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&q[i]);
		s[i]=0;
		a=2;
		b=1;
		for(j=0;j<q[i];j++){
			s[i]+=(1.0*a)/b;
			e=a;
			a=a+b;
			b=e;
		}
	}
	for(i=0;i<m;i++){
	    my_printf("%.3lf\n",s[i]);
	}
	return 0;
}