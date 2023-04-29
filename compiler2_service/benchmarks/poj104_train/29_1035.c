#define NUM_ITER 4404

#include <header.h>

int main_bench(){
	int m,shuzu[100],i,j;
	double x,s,e,a,b;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&shuzu[i]);
	}

	for(i=0;i<m;i++){	
		s=0;
		a=1;
		b=2;
		x=b/a;
		for(j=0;j<shuzu[i];j++){
			s=s+x;
			e=a;
			a=b;
			b=e+b;
			x=b/a;
		}
		my_printf("%.3lf\n",s);
	}
	return 0;
}