#define NUM_ITER 61608

#include <header.h>

int main_bench() {
	int a,n,i=0,b,max,secm=0;
	my_scanf("%d",&n);
	my_scanf("%d",&max);
	for (; i<n-1; i++) {
		my_scanf("%d",&b);
		if (max<b) {
			a=max;
			max=b;
			secm=a;
		}
		else if(b>secm){
			secm=b;
		}

	}
	my_printf("%d\n\n%d",max,secm);
	return 0;
}