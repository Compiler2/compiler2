#define NUM_ITER 10450

#include <header.h>

int main_bench(){
	int n,a[1000],i,w=0,t,r;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i=i+1){
		my_scanf("%d",&a[i]);
	}
    int b[1000];
	for(i=0;i<=n;i=i+1){
		if(a[i]%2==1){
			b[w]=a[i];
			w=w+1;
		}
	}

	for(r=w-1;r>=1;r=r-1){
	    for(i=0;i<=w-1-1;i=i+1){
			if (b[i]>b[i+1]){
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
		my_printf("%d",b[0]);
		for(i=1;i<=w-1;i=i+1){
		my_printf(",%d",b[i]);
		}
	return 0;
}