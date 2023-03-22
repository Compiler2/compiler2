#define NUM_ITER 1477740

#include <header.h>

int main_bench()
{
int n,i,a;
my_scanf("%d",&n);
while(n>0)
{
a=n%10;
n=n/10;
i++;
my_printf("%d",a);
}
return 0;
}