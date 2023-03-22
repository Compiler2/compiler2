#include <header.h>

main_bench()
{
	int a,b,c,d;
my_scanf("%d",&a);
b=3;
c=5;
d=7;
if(a%3==0&&a%5==0&&a%7==0)
my_printf("%d %d %d\n",b,c,d);
else if(a%3==0&&a%5==0)
my_printf("%d %d\n",b,c);
else if(a%3==0&&a%7==0)
my_printf("%d %d\n",b,d);
else if(a%7==0&&a%5==0)
my_printf("%d %d\n",c,d);
else if(a%3==0)
my_printf("%d\n",b);
else if(a%5==0)
my_printf("%d\n",c);
else if(a%7==0)
my_printf("%d\n",d);
else
my_printf("n\n");
return 0;
}