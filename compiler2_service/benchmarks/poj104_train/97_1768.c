#define NUM_ITER 574482

#include <header.h>

int main_bench()
{
int n,a,b,c,d,e,f;
my_scanf("%d",&n);
a=(n-n%100)/100;
b=((n%100)-(n%100)%50)/50;
c=(((n%100)%50)-((n%100)%50)%20)/20;
d=(((n%100)%50)%20-(((n%100)%50)%20)%10)/10;
e=((((n%100)%50)%20)%10-((((n%100)%50)%20)%10)%5)/5;
f=n%5;
my_printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);

return 0;
}