#include <header.h>

int main_bench()
{
    int n,a,b,c,sum;
    my_scanf("%d",&n);
    if(n%3==0)
    a=3;
    else
    a=0;
    if(n%5==0)
    b=5;
    else
    b=0;
    if(n%7==0)
    c=7;
    else
    c=0;
    sum=a+b+c;
    switch(sum)
    {
    case 0:my_printf("n");break;
    case 7:my_printf("7");break;
    case 5:my_printf("5");break;
    case 3:my_printf("3");break;
    case 12:my_printf("5 7");break;
    case 8:my_printf("3 5");break;
    case 10:my_printf("3 7");break;
    case 15:my_printf("3 5 7");break;
    return 0;
    }
}
