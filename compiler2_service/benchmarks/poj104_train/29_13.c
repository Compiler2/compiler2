#define NUM_ITER 3874

#include <header.h>

int main_bench(){
	int m,i,n,j,a=1,b=1,c=1,d=1;
	double he,sum=0;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&n);
		for(j=0;j<n;j++){
			
			a=c+d;
			b=c;
			c=a;
			d=b;
			sum+=(a*1.0)/b;
		}
		my_printf("%.3lf\n",sum);
		sum=0;
		a=1;
		b=1;
		c=1;
                  d=1;
	}
	return 0;
}
