#define NUM_ITER 1643009

#include <header.h>


int main_bench()
{
    int z,a=0,b=0,c=0,d=0,e=0,f=0;
    my_scanf("%d",&z);
    a=z/100;
    if(z-100*a>0)
    {
                 b=(z-100*a)/50;
    }
    if(z-100*a-50*b>0)
    {
                      c=(z-100*a-50*b)/20;
    }
    if(z-100*a-50*b-20*c>0)
    {
                           d=(z-100*a-50*b-20*c)/10;
    }
    if(z-100*a-50*b-20*c-10*d>0)
    {
                              e=(z-100*a-50*b-20*c-10*d)/5;
    }
    if(z-100*a-50*b-20*c-10*d-5*e>0)
    {
                                    f=z-100*a-50*b-20*c-10*d-5*e;
    }
    my_printf("%d\n",a);
    my_printf("%d\n",b);
    my_printf("%d\n",c);
    my_printf("%d\n",d);
    my_printf("%d\n",e);
    my_printf("%d\n",f);
    return 0;
}
                    
