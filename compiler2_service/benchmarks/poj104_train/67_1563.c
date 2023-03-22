#define NUM_ITER 26283

#include <header.h>

main_bench()
{
      int n ;
      double x,y;
      my_scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
         int a,b;
         my_scanf("%d %d",&a,&b);
         if(i==0)
         { 
            x=(double)b/a;
            continue;
         }
         else 
         {
              y=(double)b/a;
         }
         if(y-x>0.05)
         my_printf("better\n");
         else if(x-y>0.05)
         my_printf("worse\n");
         else
          my_printf("same\n");
      }
    getchar();
    getchar(); 
    getchar();
    getchar(); 
}
