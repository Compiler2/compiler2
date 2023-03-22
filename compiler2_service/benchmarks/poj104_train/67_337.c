#define NUM_ITER 27882

#include <header.h>

int main_bench()
{ int n,a[100],z[100];
	int i;
	
my_scanf("%d",&n);
my_scanf("%d %d",&z[0],&a[0]);
for(i=1;i<n;i++){
	my_scanf("%d %d",&z[i],&a[i]);
	if(((float)(a[i])/z[i]-(float)(a[0])/z[0])>0.05){
		my_printf("better\n");
		}
	else if(((float)(a[0])/z[0]-(float)(a[i])/z[i])>0.05){
		my_printf("worse\n");
		}
    else{
		my_printf("same\n");
		}


}

	return 0;
}