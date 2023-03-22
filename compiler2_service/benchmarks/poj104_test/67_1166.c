#include <header.h>

int main_bench()
{
    int a,b,n,i;
    double x,y;
    my_scanf("%d",&n);
    my_scanf("%d%d",&a,&b);
    x=(double)b/a;
    for(i=1;i<n;i++)
   {
      my_scanf("%d%d",&a,&b);
      y=(double)b/a;
      if(y-x>0.05)
      {
         my_printf("better");
         my_printf("\n");
      }
      else if(x-y>0.05)
     {
         my_printf("worse");
         my_printf("\n");
     }
     else
     {
         my_printf("same");
         my_printf("\n");
     }
   }
   return 0;
}

