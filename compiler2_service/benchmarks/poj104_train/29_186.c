#include <header.h>

int main_bench()
{
	int m,n[100]={0};
	double sum[100]={0},a=1,b=2,c=0;
	my_scanf("%d",&m);
	for (int i=0;i<m;i++){
		my_scanf("%d",&n[i]);
		a=1;
		b=2;
		for(int k=0;k<n[i];k++){
			sum[i]+=b/a;
			c=b;
			b=a+b;
			a=c;
		}
		my_printf("%.3lf\n",sum[i]);
	}
	return 0;
}