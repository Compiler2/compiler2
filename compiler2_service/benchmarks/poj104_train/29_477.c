#define NUM_ITER 5261

#include <header.h>

int main_bench()
{
	int i,j,m,n[100],a=1,b=2,e;
	double he[100];
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&n[i]);
	}
	he[0]=0;
	for(i=0;i<m;i++){
		for(j=0;j<n[i];j++){
			he[i]=he[i]+(1.0*b/(a*1.0));
			e=b;
			b=a+b;
			a=e;

		}
		my_printf("%.3lf\n",he[i]);
		he[i+1]=0;
		a=1;
		b=2;
	}
	return 0;
}