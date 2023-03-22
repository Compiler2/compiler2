#include <header.h>

int main_bench(){
	int n,i;
	my_scanf("%d ",&n);
	for(i=1;i>0;i++){
		if(n==1){
			my_printf("End");
			break;
		}
		if(n%2==0){
			n=n/2;
			my_printf("%d/2=%d\n",2*n,n);
			continue;
		}else{
			my_printf("%d",n);
			n=n*3+1;
			my_printf("*3+1=%d\n",n);
			continue;
		}
	}
	return 0;
}