#include <header.h>

int main_bench()
{
    int a,b,c,d;
    my_scanf("%d",&a);
    char n;
    if(a%3==0&&a%5==0&&a%7==0)
    my_printf("3 5 7");
    if(a%3!=0&&a%5!=0&&a%7!=0)
    my_printf("n");
    if(a%3!=0&&a%5==0&&a%7==0)
    my_printf("5 7");
    if(a%3==0&&a%5==0&&a%7!=0)
    my_printf("3 5");
    if(a%3==0&&a%5!=0&&a%7==0)
    my_printf("3 7");
    if(a%3==0&&a%5!=0&&a%7!=0)
    my_printf("3");
    if(a%3!=0&&a%5==0&&a%7!=0)
    my_printf("5");
    if(a%3!=0&&a%5!=0&&a%7==0)
    my_printf("7");
    return 0;
}
    