#include <header.h>

int main_bench()
{
	int a=3,b=5,c=7,d;
	my_scanf("%d",&d);
	if(d%(a*b*c)==0) my_printf("%d %d %d",a,b,c);
	else if(d%(a*b)==0) my_printf("%d %d",a,b);
	else if(d%(a*c)==0) my_printf("%d %d",a,c);
	else if(d%(b*c)==0) my_printf("%d %d",b,c);
	else if(d%a==0) my_printf("%d",a);
	else if(d%b==0) my_printf("%d",b);
	else if(d%c==0) my_printf("%d",c);
	else my_printf("n");
}
