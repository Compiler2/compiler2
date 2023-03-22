#define NUM_ITER 1946571

#include <header.h>

int main_bench(){
	int n,a,b,c;
	my_scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a==0&&b==0&&c==0){
		my_printf("3 5 7");
	}else{
		if(a==0&&b==0){
			my_printf("3 5");
		}else{
			if(a==0&&c==0){
				my_printf("3 7");
			}else{
				if(b==0&&c==0){
					my_printf("5 7");
				}else{
					if(a==0){
						my_printf("3");
					}else{
						if(b==0){
							my_printf("5");
						}else{
							if(c==0){
								my_printf("7");
							}else{
								my_printf("n");
							}
						}
					}
				}
			}
		}
	}
return 0;
}
				

