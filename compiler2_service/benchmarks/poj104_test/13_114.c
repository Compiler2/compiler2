#include <header.h>

int main_bench()
{
      int a,b,c[100000],d,e;
      e=0; 
      my_scanf("%d",&a);
     for(b=1;b<=a;b++)
     my_scanf("%d",&c[b]);
     my_printf("%d",c[1]);
     b=2;
     while(b<=a)
     {
                e=0;
      for(d=1;d<b;d++)
      {
        if(c[b]==c[d])
        e=1;
        else 
        e=e;
        }
          if(e==0)
          my_printf(" %d",c[b]);
          b=b+1;
          }
          getchar();
          getchar();
          }