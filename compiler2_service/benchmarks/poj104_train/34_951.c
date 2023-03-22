#define NUM_ITER 387391

#include <header.h>

int main_bench() {
	int a[10000];
	int i,j;
	my_scanf("%d",&a[0]);
	if(a[0]==1){
		my_printf("End\n");
	}else{
		for(i=0;a[i]!=1;i++){
			if(a[i]%2==1){
				a[i+1]=a[i]*3+1;
				my_printf("%d*3+1=%d\n",a[i],a[i+1]);
			}else{
				a[i+1]=a[i]/2;
				my_printf("%d/2=%d\n",a[i],a[i+1]);
			}
		
			}
		my_printf("End\n");
	}
}