#include <header.h>

int main_bench()
{
     int n;
     my_scanf("%d",&n);
     int a0,b0;
     my_scanf("%d %d",&a0,&b0);
     double d=(double)b0/a0;
     for(int i=0;i<n-1;i++)
     {
           int a,b;
           my_scanf("%d %d",&a,&b);
           double c=(double)b/a;
           if(d>=c)
           {
                if(d-c>0.05) my_printf("worse\n");
                else my_printf("same\n");
           }
           else
          {
               if(c-d>0.05) my_printf("better\n");
               else my_printf("same\n");
          }
     }
}