#include <header.h>

int main_bench(){
	int n;
	int a[10000];
	int i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i<n-1){
			my_scanf("%d ",&a[i]);
		}
		else{
			my_scanf("%d",&a[i]);
		}
	}
	for(i=n-1;i>=0;i--){
		if(i>0){
			my_printf("%d ",a[i]);
		}
		else{
			my_printf("%d",a[i]);
		}
	}
	return 0;
}