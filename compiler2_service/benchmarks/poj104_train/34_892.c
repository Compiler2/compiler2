#define NUM_ITER 340068

#include <header.h>

int main_bench()
{
	int n,a,b,c=0;
	my_scanf("%d",&n);
	a=n;
	if(n==1){
		my_printf("End");
	}else{
			for(;1<a;){
				if(a==1){break;}else{
				if(a%2==0){
					b=a;
					a=a/2;
					my_printf("%d/2=%d",b,a);
					my_printf("\n");}else{
				if(a%2==1){
					b=a;
					a=a*3+1;
					my_printf("%d*3+1=%d",b,a);
					my_printf("\n");}
				
			}
		
					}}my_printf("End");}

	return 0;
}