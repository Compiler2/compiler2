#include <header.h>

int main_bench()
{
    int a,b,max,min,n,s=0;
    char c;
    my_scanf("%d%c",&a,&c);
    if (c=='\n')
    my_printf("No");
    else
    {  my_scanf("%d%c",&b,&c);
    if (a>b)
    {max=a;
    min=b;
    s=1;}
    else if (a<b)
    {max=b;
    min=a;
    s=1;}
    else 
    {max=a;
    min=b;
    s=0;}
    for (;c==',';)
    {
             my_scanf("%d%c",&n,&c);
             if (n!=a||n!=b)
             s=1;
              if (n>min&&n<max)
               min=n;
              else if (n>max)
               {min=max;
               max=n;}
               else if (n<min&&min==max)
               min=n;
    }

    if (s==0)
    my_printf("No");
    else
    my_printf("%d",min);}
       return 0;
}
