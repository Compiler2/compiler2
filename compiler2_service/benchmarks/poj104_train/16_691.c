#include <header.h>

int main_bench()
{
    int n,a,b,c,d;
    my_scanf("%d",&n);
    a=n/1000;
    b=n/100-10*a;
    c=n/10-10*b-100*a;
    d=n-10*c-100*b-1000*a;
    if(a==0&&b==0&&c==0)my_printf("%d",d);
    if(a==0&&b==0&&c!=0){my_printf("%d",d);my_printf("%d",c);}
    if(a==0&&b!=0){my_printf("%d",d);my_printf("%d",c);my_printf("%d",b);}
    if(a!=0){my_printf("%d",d);my_printf("%d",c);my_printf("%d",b);my_printf("%d",a);}
    return 0;
} 