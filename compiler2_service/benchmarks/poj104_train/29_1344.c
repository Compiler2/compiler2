#include <header.h>

int main_bench()
{
	int m,u;
	my_scanf("%d", &m);
	int n,i;
	for(u=0;u<m;u++){
		double s=0;
                  	double a=2,b=1;
		my_scanf("%d", &n);
		for(i=0;i<n;i++){
			double t=0;
			s+=a/b;
			t=a;
			a+=b;
			b=t;
		}
		my_printf("%.3lf\n", s);
	}
	return 0;
}
