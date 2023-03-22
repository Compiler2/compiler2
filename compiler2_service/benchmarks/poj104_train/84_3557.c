#include <header.h>

int main_bench()
{
    int i;
    my_scanf("%d",&i);
    int a,max=0,sec=0;
    while(i>0&&i<100)
    {
       my_scanf("%d",&a);
       if(a>=max)
       {sec=max;
       max=a;}
       if(a<max&&a>sec)
       sec=a;
       i--;
    }
my_printf("%d\n",max);
my_printf("%d\n",sec);
return 0;
}