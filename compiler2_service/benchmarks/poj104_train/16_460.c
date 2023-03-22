#define NUM_ITER 1599304

#include <header.h>

int main_bench()
{
int a,n;
my_scanf("%d",&n);
if(n<10)
my_printf("%d",n);
else if(n==10)
my_printf("1");
else
{do
{a=n%10;
my_printf("%d",a);
n=(n-a)/10;
}
while(n>=10);
a=n;
my_printf("%d",a);
}
return 0;
}