#define NUM_ITER 4724

#include <header.h>

int main_bench(){
	int a[10000]={0};
	int	i,j,t,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		for(i=0;i<n-j;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	my_printf("%d", a[n]);
	my_printf("\n");
	my_printf("%d", a[n-1]);
	return 0;
}

