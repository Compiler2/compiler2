#define NUM_ITER 4362

#include <header.h>

int main_bench(){
	int i,j,m;
	int d[100];
	double a,b,e,s=0;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		a=2.0;b=1.0;
		my_scanf("%d",&d[i]);
		for(j=0;j<d[i];j++){
			s+=a/b;
			e=b;
			b=a;
			a=a+e;
		}
		my_printf("%.3lf\n",s);
		s=0;
	}
	return 0;
}