#define NUM_ITER 2812

#include <header.h>

int main_bench() {
	int n;
	my_scanf("%d",&n);
	int a[50000];
	int b[50000];
	int i,k,e;
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(a[i]>a[i+1]){
				e=a[i+1];
				a[i+1]=a[i];
				a[i]=e;
				e=b[i+1];
				b[i+1]=b[i];
				b[i]=e;
			}
		}
	}
	int hb1=a[0];
	int hb2=b[0];
	for(i=0;i<n;i++){
		for(k=0;k<=i;k++){
			if(b[i]>hb2){
				hb2=b[i];
			}
		}
		if(a[i+1]>hb2){
			break;
		}
	}
	if(i!=n){
		my_printf("no");
	}
	if(i==n){
		for(k=0;k<i;k++){
			if(b[i]>hb2){
				hb2=b[i];
			}
		}
		my_printf("%d %d",hb1,hb2);
	}
	return 0;
}
		