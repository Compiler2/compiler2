#define NUM_ITER 7817

#include <header.h>

int main_bench(){
	int n,i,m,t,p,s;
	int a[100],b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		m=1;
		t=1;
		for(s=3;s<=a[i];s++){
			p=t;
			t=t+m;
			m=p;
		}
		b[i]=t;
	}
	for(i=0;i<n;i++){
		my_printf("%d\n",b[i]);
	}
	return 0;
}