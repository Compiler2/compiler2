#include <header.h>

int main_bench(){
	int a;
	int b,i;
	my_scanf("%d",&a);
	b=a;
	for(i=0;b!=1;i++){
		if(a%2==0){
			b=a/2;
			if(i==0){
				my_printf("%d/2=%d",a,b);
			}
			else if (i!=0){
				my_printf("\n%d/2=%d",a,b);
			}
		}
		else if(a%2!=0) {
			b=a*3+1;
			if(i==0){
				my_printf("%d*3+1=%d",a,b);
			}
			else if(i!=0){
				my_printf("\n%d*3+1=%d",a,b);
			}
		}
		a=b;
	}
	my_printf("\nEnd");
	return 0;
}