#include <header.h>

int main_bench()
{
    int a,x,y,z;
    char b;
    my_scanf("%d",&a);
    b='n';
    x=3;
    y=5;
    z=7;
    if(((a%3==0)&(a%5==0)&(a%7==0))==1)
    {
                                        my_printf("%d %d %d",x,y,z);
    }
    if(((a%3!=0)&(a%5!=0)&(a%7!=0))==1)
    {
                                         my_printf("%c",b);
    }
    if(((a%7==0)&(a%3!=0)&(a%5!=0))==1)
    {
                                       my_printf("%d",z);
    }
    if(((a%3==0)&(a%5!=0)&(a%7!=0))==1)
    {
                                       my_printf("%d",x);
    }
    if(((a%5==0)&(a%3!=0)&(a%7!=0))==1)
    {
                                       my_printf("%d",y);
    }
    if(((a%3==0)&(a%5==0)&(a%7!=0))==1)
    {
                                       my_printf("%d %d",x,y);
    } 
    if(((a%7==0)&(a%5==0)&(a%3!=0))==1)
    {
                                       my_printf("%d %d",y,z);
    }
    if(((a%3==0)&(a%7==0)&(a%5!=0))==1)
    {
                                       my_printf("%d %d",x,z);
    } 
    return 0;
}
