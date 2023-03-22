#include <header.h>

int main_bench()
{
	int n,i=1;

	my_scanf("%d",&n);

	if(n==1)
		my_printf("End");
	else{
		while(i){
			if(n%2!=0){
				my_printf("%d*%d+%d=%d\n",n,3,1,n*3+1);
				n=n*3+1;
			}
			else{
				my_printf("%d/%d=%d\n",n,2,n/2);
				n=n/2;
				if(n==1)
					i=0;
			}
		}
		my_printf("End");
	}
	return 0;
}