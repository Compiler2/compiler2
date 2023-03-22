#define NUM_ITER 1190507

#include <header.h>

int main_bench()
{
int a,r;
my_scanf("%d",&a);
r=a%10;
do
{
my_printf("%d",r);
a=a-r;
a=a/10;
r=a%10;
}
while(a>=1);
return 0;
}