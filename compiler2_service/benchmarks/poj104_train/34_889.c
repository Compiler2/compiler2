#define NUM_ITER 343046

#include <header.h>


int main_bench(){
int n;
int a,e;
a=0;
my_scanf("%d",&n);
if(n==1){
	my_printf("End");
}
else if(n!=1){
	a=n;
	for(;a!=1;){
		if(a%2==0){
			e=a;
			a=a/2;
			my_printf("%d/2=%d\n",e,a);
			if(a==1){
				my_printf("End");
				break;
			}
		}
		else if(a%2==1){
			e=a;
			a=a*3+1;
			my_printf("%d*3+1=%d\n",e,a);
			if(a==1){
				my_printf("End");
			break;
			}
		}
	}
}
return 0;
}