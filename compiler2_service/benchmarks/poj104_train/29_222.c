#define NUM_ITER 5399

#include <header.h>

int main_bench()
{
	int m,i,j,n,x,y,temp;
	double sum,a,b;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&n);
		sum=0.0;
		x=1,y=2;
		for(j=1;j<=n;j++){
			sum=sum+(double)y/x;
			temp=x;
			x=y;
			y=x+temp;
		}
		my_printf("%.3lf\n",sum);
	}
	return 0;
}