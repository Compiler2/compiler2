#include <header.h>

int main_bench(){
	int n, m, j, a, b;
	double sz[100], sum;
	my_scanf("%d", &n);
	for(int i=1; i<=n; i++){
		sum=0;
		a=1;
		b=2;
		my_scanf("%d", &m);
		for(j=0; j<m; j++){
			sz[j]=1.0*b/a;
			b=b+a;
			a=b-a;
			sum=sum+sz[j];
		}
		my_printf("%.3f\n", sum);
	}
	return 0;
}