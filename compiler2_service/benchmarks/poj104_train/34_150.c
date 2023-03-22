#include <header.h>

int main_bench()
{
    long x,m; 
    my_scanf("%ld",&x);
    while (x!=1)
    {
      if (x%2==0)  {my_printf("%ld/2=%ld\n",x,x/2);x=x/2;}
       else {m=x*3+1;my_printf("%ld*3+1=%ld\n",x,m);x=m;}
      
          }
    if (x==1)my_printf("End");

    }
