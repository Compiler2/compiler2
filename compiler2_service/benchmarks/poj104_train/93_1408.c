#define NUM_ITER 1210847

#include <header.h>

int main_bench()
{
	int t,a=3,b=5,c=7;
	my_scanf("%d",&t);
	if(t%a==0&&t%b==0&&t%c==0)
		my_printf("%d %d %d",a,b,c);
	else if(t%a==0&&t%b==0)
		my_printf("%d %d",a,b);
	else if(t%a==0&&t%c==0)
		my_printf("%d %d",a,c);
	else if(t%b==0&&t%c==0)
		my_printf("%d %d",b,c);
	else if(t%a==0)
		my_printf("%d",a);
	else if(t%b==0)
		my_printf("%d",b);
	else if(t%c==0)
		my_printf("%d",c);
	else 
		my_printf("n");
	return 0;
}