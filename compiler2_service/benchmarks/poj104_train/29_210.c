#define NUM_ITER 4954

#include <header.h>


int main_bench()
{	int i,j,m,n;
	my_scanf("%d",&m);
	int a=2;
	int aa=1;
	int b=1,bb=1;
	int x=0,y=0;
	float sum=2.000;
	for(i=0;i<m;i++){
		my_scanf("%d",&n);
		for(j=1;j<n;j++){
			x=aa;
			aa=a;
			a=a+x;
			y=bb;
			bb=b;
			b=b+y;
			sum+=(float)a/(float)b;
		}
		my_printf("%.3f\n",sum);
		a=2;
		aa=1;
		b=1,bb=1;
		x=0,y=0;
		sum=2.000;
	}

	return 0;
}