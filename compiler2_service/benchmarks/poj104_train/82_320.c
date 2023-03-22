#include <header.h>

int main_bench()
{
    int n,a,b,i,x,y;
    my_scanf("%d",&n);
    x=0;
    y=0;
    i=1;
    while(i<=n)
    {
               my_scanf("%d %d",&a,&b);
               if(a<=140&&a>=90&&b<=90&&b>=60)
               {
               x=x+1;
               if(y<x)
               {
                      y=x;
               }
               }
               else x=0;
               i++;
    }
    my_printf("%d",y);
    my_scanf("%d",&n);
    return 0; 

} 