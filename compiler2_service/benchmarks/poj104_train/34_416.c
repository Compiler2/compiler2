#include <header.h>

int main_bench()
{
    int n,i;
	my_scanf("%d",&n);
	if(n==1){
		my_printf("End");
	}else{
		for(i=0;;i++){
			if(n%2==0){
				my_printf("%d/2=%d\n",n,n/2);
				n/=2;
			}else{
				my_printf("%d*3+1=%d\n",n,3*n+1);
				n=3*n+1;
			}
			if(n==1){
				break;
			}
		}
			my_printf("End\n");
	}

         
    return 0;
}