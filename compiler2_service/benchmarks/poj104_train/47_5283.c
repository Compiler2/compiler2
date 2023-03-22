#define NUM_ITER 55552

#include <header.h>

int main_bench(){
	int b[100],a[100],i=0,n,j=0;
	my_scanf("%d\n",&n);

	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		b[i]=a[n-i-1];
		my_printf("%d ",b[i]);
	}
         if(i=n-1){
          b[i]=a[0];
          my_printf("%d",b[i]);
        }
	return 0;

}
