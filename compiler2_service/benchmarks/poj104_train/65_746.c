#define NUM_ITER 38434

#include <header.h>

int main_bench(){
	int n, i, a[1]={0}, b[1]={0}, m, k, c, d;
	my_scanf("%d", &n);
	for(i=0;i<n;i++){
		my_scanf("%d%d", &m, &k);
		if(m==0&&k==1){
			a[0]++;
		}
		if(m==1&&k==0){
			b[0]++;
		}
		if(m==1&&k==2){
			a[0]++;
		}
		if(m==2&&k==1){
			b[0]++;
		}
		if(m==0&&k==2){
			b[0]++;
		}
		if(m==2&&k==0){
			a[0]++;
		}
		if(m==k){
			a[0]++;
			b[0]++;
		}
	}
	c=a[0];
	d=b[0];
	if(c>d){
		my_printf("A");
	}
	if(c<d){
		my_printf("B");
	}
	if(c==d){
		my_printf("Tie");
	}
	return 0;
}