#include <header.h>

int main_bench(){
	int i,n;
	int h[100];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&(h[i]));
	}
	for(i=n;i>0;i--){
		if(i==1){
			my_printf("%d",h[1]);
		}else{
		my_printf("%d ",h[i]);
		}
	}
	return 0;
}
	