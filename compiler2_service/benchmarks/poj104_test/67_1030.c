#define NUM_ITER 24886

#include <header.h>

int main_bench(){
	int n,a,b,i;
	double q,e;
	my_scanf("%d\n",&n);
    my_scanf("%d %d\n",&a,&b);
	q=(double)b/(double)a;
	for(i=2;i<=n;i++){
		my_scanf("%d %d\n",&a,&b);
        e=(double)b/(double)a;
    if(e-q>0.05) my_printf("better\n");
	if(q-e>0.05) my_printf("worse\n");
	if((e-q)*(e-q)<=0.0025) my_printf("same\n");
	}
	return 0;
}

