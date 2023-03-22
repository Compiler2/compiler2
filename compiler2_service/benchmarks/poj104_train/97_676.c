#define NUM_ITER 1266464

#include <header.h>

int main_bench()
{
int n,a,b,c,d,e;
my_scanf("%d",&n);
a=n%100;
b=a%50;
c=b%20;
d=c%10;
e=d%5;
my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",n/100,a/50,b/20,c/10,d/5,e);

return 0;
 }
