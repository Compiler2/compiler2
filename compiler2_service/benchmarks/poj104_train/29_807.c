#include <header.h>

int main_bench()
{
	int n,i,m,j;
		my_scanf("%d\n",&m);
	for(i=0;i<m;i++){
double sum=0;
		my_scanf("%d\n",&n);
                  double e=1.0;
		for(j=0;j<n;j++){
			e=1.0+1/e;
			sum+=e;
		}
my_printf("%.3lf\n",sum);
	}
	return 0;
}