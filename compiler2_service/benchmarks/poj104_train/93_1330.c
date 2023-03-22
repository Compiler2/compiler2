#define NUM_ITER 860035

#include <header.h>


int main_bench()
{
	int a;
	my_scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)
	my_printf("%d %d %d",3, 5, 7);
if(a%3==0&&a%5==0&&a%7!=0)
	my_printf("%d %d",3, 5);
if(a%3==0&&a%5!=0&&a%7==0)
	my_printf("%d %d",3, 7);
if(a%3!=0&&a%5==0&&a%7==0)
	my_printf("%d %d",5, 7);
if(a%3!=0&&a%5!=0&&a%7!=0)
	my_printf("n");
if(a%3==0&&a%5!=0&&a%7!=0)
	my_printf("%d",3);
if(a%3!=0&&a%5==0&&a%7!=0)
	my_printf("%d",5);
if(a%3!=0&&a%5!=0&&a%7==0)
	my_printf("%d",7);
	return 0;
}