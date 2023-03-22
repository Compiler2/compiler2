#include <header.h>

int main_bench()
{
    int n,a,b,c,e,f,g;
    my_scanf("%d",&n);
    a=(int)(n/1000);
    e=n-1000*a;
    b=(int)(e/100);
    f=e-100*b;
    c=(int)(f/10);
    g=f-10*c;
    if(n>=10000)
    {my_printf("00001");
}
else
{
    if(n>=1000)
    {my_printf("%d%d%d%d",g,c,b,a);
}
else
{if(n>=100)
{
           my_printf("%d%d%d",g,c,b);
           }
           else
           {if(n>=10)
           {my_printf("%d%d",g,c);
           }
           else
           {my_printf("%d",g);
           }
           }
           }
           }
    return 0;
}
            