#define NUM_ITER 1056883

#include <header.h>

int main_bench()
{
int a,b;
my_scanf("%d",&a);
b=a/100;
my_printf("%d\n",b);
a=a-a/100*100;
b=a/50;
my_printf("%d\n",(b));
a=a-a/50*50;
b=a/20;
my_printf("%d\n",b);
a=a-a/20*20;
b=a/10;
my_printf("%d\n",b);
a=a-a/10*10;
b=a/5;
my_printf("%d\n",b);
a=a-a/5*5;
my_printf("%d\n",a);
return 0;
}