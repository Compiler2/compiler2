#define NUM_ITER 375924

#include <header.h>

int main_bench(){
	int n,j,i;
	my_scanf("%d",&n);
for(;n!=1;){
	if(n%2==0){ my_printf("%d/2=",n); n=n/2; 	my_printf("%d",n);}
	 else{  my_printf("%d*3+1=",n); n=n*3+1; 	my_printf("%d",n);}
	 my_printf("\n");}
	my_printf("End");
	return 0;
}
