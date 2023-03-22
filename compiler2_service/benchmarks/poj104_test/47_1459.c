#include <header.h>

int main_bench(){
    int n,i=0;
	my_scanf("%d",&n);
	int a[100],s=n-1;
	for(i=0;i<n-1;i++){
		my_scanf("%d \n",&a[i]);
	}
	my_scanf("%d",&a[n-1]);
	for(s=n-1;s>0;s--){
		my_printf("%d ",a[s]);
	}
	my_printf("%d",a[0]);
	return 0;
}
