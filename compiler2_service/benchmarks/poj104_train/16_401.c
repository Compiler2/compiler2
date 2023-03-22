#include <header.h>

main_bench()
{
    int n;
    my_scanf("%d",&n);
    my_printf("%d",n%10);
    if(n/10!=0)my_printf("%d",(n%100)/10);
    if(n/100!=0)my_printf("%d",(n%1000)/100);
    if(n/1000!=0)my_printf("%d",(n%10000)/1000);
    if(n/10000!=0)my_printf("%d",n/10000);
}