#include <header.h>


int main_bench()
{
    int a,sum;
    sum=0;
    my_scanf("%d",&a);
    if (a%3==0)
    sum=sum+3;
    if (a%5==0)
    sum=sum+5;
    if (a%7==0)
    sum=sum+7;
    if (sum==0)
    my_printf("n");
    if (sum==3)
    my_printf("3");
    if (sum==5)
    my_printf("5");
    if (sum==7)
    my_printf("7");
    if (sum==8)
    my_printf("3 5");
    if (sum==10)
    my_printf("3 7");
    if (sum==12)
    my_printf("5 7");
    if (sum==15)
    my_printf("3 5 7");
    return 0;
}
