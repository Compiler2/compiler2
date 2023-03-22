#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
my_printf("%d",n/100);
if((n%100)/10==9){
	my_printf("\n1\n2\n0");
}
	else if((n%100)/10==8){
		my_printf("\n1\n1\n1");
	}
		else if((n%100)/10==7){
        my_printf("\n1\n1\n0");
		}
        else if((n%100)/10==6){
       my_printf("\n1\n0\n1");
		}
		else if((n%100)/10==5){
my_printf("\n1\n0\n0");
		}
		else if((n%100)/10==4){
my_printf("\n0\n2\n0");
		}
		else if((n%100)/10==3){
my_printf("\n0\n1\n1");
		}
		else if((n%100)/10==2){
my_printf("\n0\n1\n0");
		}
else if((n%100)/10==1){
my_printf("\n0\n0\n1");
}
else{
my_printf("\n0\n0\n0");
}
if((n%10)>=5){
	my_printf("\n1\n%d",(n%10)-5);
}
	else{
		my_printf("\n0\n%d",(n%10));
	}
	return 0;
}
