#define NUM_ITER 1885236

#include <header.h>

int main_bench()
{
	int a,b,c,m;
	my_scanf("%d",&m);
	a=m%3;
	b=m%5;
	c=m%7;
	if(a==0&&b==0&&c==0)
		my_printf("%d %d %d",3,5,7);
	else if(a==0&&b==0&&c!=0)
		my_printf("%d %d",3,5);
	else if(a==0&&b!=0&&c==0)
		my_printf("%d %d",3,7);
	else if(a!=0&&b==0&&c==0)
		my_printf("%d %d",5,7);
	else if(a==0&&b!=0&&c!=0)
		my_printf("%d",3);
	else if(a!=0&&b==0&&c!=0)
		my_printf("%d",5);
	else if(a!=0&&b!=0&&c==0)
		my_printf("%d",7);
	else
	my_printf("n");
	return 0;
}