#define NUM_ITER 9743

#include <header.h>

int main_bench()
{
	int n, i, k, j;
	int a[1000], sum;
	int b;
	my_scanf("%d %d", &n, &k);
	my_scanf("%d", &a[0]);
	for(i=1;i<n;i++){
		my_scanf("%d", &a[i]);
		for(j=0;j<i;j++){
			sum=a[i]+a[j];
			if(sum==k){
				b=1;
			}
		}
	}
	if(b==1){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}
