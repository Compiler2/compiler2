#define NUM_ITER 1183881

#include <header.h>

int main_bench()
{
int a;
char n;
n='n';
my_scanf("%d",&a);
if(a%3==0&&a%5==0&&a%7==0)
{
	my_printf("3 5 7");
}
else if(a%3!=0&&a%5==0&&a%7==0)
{
	my_printf("5 7");
}
else if(a%3==0&&a%5!=0&&a%7==0)
{
	my_printf("3 7");
}
else if(a%3==0&&a%5==0&&a%7!=0)
{
	my_printf("3 5");
}
else if(a%3==0&&a%5!=0&&a%7!=0)
{
	my_printf("3");
}
else if(a%3!=0&&a%5==0&&a%7!=0)
{
	my_printf("5");
}
else if(a%3!=0&&a%5!=0&&a%7==0)
{
	my_printf("7");
}
else if(a%3!=0&&a%5!=0&&a%7!=0)
{
	my_printf("%c",n);
}
return 0;
}