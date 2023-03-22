#define NUM_ITER 37994

#include <header.h>


int main_bench(){
	int n,i,ta,tb;
	int a[200],b[200],x[200];

	my_scanf("%d",&n);

	for (i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}

	ta=0;
	tb=0;

	for (i=0;i<n;i++){
		x[i]=b[i]-a[i];
		if (x[i]==1||x[i]==-2){
			ta++;
		}else if(x[i]==-1||x[i]==2){
			tb++;
		}
	}

	if(ta<tb){
		my_printf("B\n");
	}else if(ta==tb){
		my_printf("Tie\n");
	}else{
		my_printf("A\n");
	}

	return 0;
}
