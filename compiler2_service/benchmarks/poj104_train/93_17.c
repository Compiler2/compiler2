#include <header.h>

int main_bench()
{
	int m,a,b,c,d,i;
	my_scanf("%d",&m);
	a=m%3; b=m%5; c=m%7;
	if (a==0&&b==0&&c==0) my_printf("3 5 7\n");
    else if (a!=0&&b==0&&c==0) my_printf("5 7\n");
	else if (a==0&&b!=0&&c==0) my_printf("3 7\n");
	else if (a==0&&b==0&&c!=0) my_printf("3 5\n");
	else if (a!=0&&b!=0&&c==0) my_printf("7\n");
    else if (a!=0&&b==0&&c!=0) my_printf("5\n");
	else if (a==0&&b!=0&&c!=0) my_printf("3\n");
	else my_printf("n\n");
}