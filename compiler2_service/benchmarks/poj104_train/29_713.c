#include <header.h>

int main_bench()
{
	int i,j,n,m;
	double a=1,sum[100]={0};
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&n);
		for(j=0;j<n;j++){
			a=1/a+1;
			sum[i]=sum[i]+a;	
		}
                    a=1;
	}
	for(i=0;i<m;i++){
		my_printf("%.3lf\n",sum[i]);
	}
	return 0;
}
