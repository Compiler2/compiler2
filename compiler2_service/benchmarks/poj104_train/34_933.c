#define NUM_ITER 247631

#include <header.h>

int main_bench()
{
	int f,i,j,n;
	my_scanf("%d",&n);
	if(n==1){
		my_printf("End\n");
		return 0;
	}
	do{
		if(n>1&&n%2!=0){
			f=(n*3)+1;
			my_printf("%d*3+1=%d\n",n,f);
			n=(n*3)+1;
		}
		if(n>1&&(n%2)==0){
			f=n/2;
			my_printf("%d/2=%d\n",n,f);
			n=n/2;
		}
	}while(n>1);
	my_printf("End\n");
	return 0;
}
