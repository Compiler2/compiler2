#include <header.h>

int main_bench()
{
	int a,b;
	my_scanf("%d",&a);
	while(a!=1){
		if(a%2==1) { my_printf("%d*3+1=",a);a=a*3+1;my_printf("%d\n",a);}
		else if(a%2==0){ my_printf("%d/2=",a);a=a/2;my_printf("%d\n",a);}
	}
	my_printf("End");
}






