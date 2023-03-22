#include <header.h>


int main_bench(){
	int n,i,j,a[10000],b=0,c,d=0;
	
	my_scanf("%d",&n);
	if(n==1) my_printf("End");
	else{
		for(i=0;;i++){
			if(n==1){
				my_printf("End");
				break;
			}
			else{
			    if(n%2==0){
				    my_printf("%d/2=%d\n",n,n/2);
				    n=n/2;
				}
			    else{
				    my_printf("%d*3+1=%d\n",n,n*3+1);
				    n=n*3+1;
				}
			}
		}
	}
	return 0;
}

