#define NUM_ITER 4780

#include <header.h>


int main_bench()
{
	int m,n;
	int p,q,t,i,j;
	float sum;
	my_scanf("%d",&m);
	for(i=1;i<=m;i++){
		my_scanf("%d",&n);
		j=1;
		sum=0;
		p=2;
		q=1;
		do{
			sum=sum+(float)p/q;
			t=p;
			p=p+q;
			q=t;
			j=j+1;
		}
		while(j<=n);
		my_printf("%.3lf\n",sum);
	}
}
