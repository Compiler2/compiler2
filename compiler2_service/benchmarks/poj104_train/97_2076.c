#define NUM_ITER 1396006

#include <header.h>

int main_bench()
{
    int a,b,c,d,e,f,n;
    my_scanf("%d",&n);
    a=n/100;
    b=(n-a*100)/50;
    c=(n-a*100-b*50)/20;
    d=(n-a*100-b*50-c*20)/10;
    e=(n-a*100-b*50-c*20-d*10)/5;
    f=n-a*100-b*50-c*20-d*10-e*5;
    my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
   my_scanf("%d",&a);
    return 0;
}