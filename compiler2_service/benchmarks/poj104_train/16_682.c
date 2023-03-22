#include <header.h>

int main_bench()
{
    int n,x,y,z,m;
    my_scanf("%d",&n);
    x=n%10;
    y=(n%100-n%10)/10;
    z=(n%1000-n%100)/100;
    m=n/1000;
    if(n<10)
    my_printf("%d",n);
    else if(n==10)
    my_printf("01");
    else if(n==100)
    my_printf("001");
    else if(n==1000)
    my_printf("0001");
    else if(n==10000)
    my_printf("00001");
    else if(n>10&&n<100)
    my_printf("%d%d",x,y);
    else if(n>100&&n<1000)
    my_printf("%d%d%d",x,y,z);
    else if(n>1000&&n<10000)
    my_printf("%d%d%d%d",x,y,z,m);
    return 0;
}