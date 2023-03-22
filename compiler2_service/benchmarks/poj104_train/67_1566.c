#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      float p0,q0;
      my_scanf("%d %d",&p0,&q0);
      for(int i=1;i<=n-1;i++)
      {
            float p,q;
            my_scanf("%d %d",&p,&q);
            if((q/p-q0/p0)<=0.05&&(q0/p0-q/p)<=0.05)
                 my_printf("same\n");
            else if((q/p-q0/p0)>0.05)
                 my_printf("better\n");
            else if((q0/p0-q/p)>0.05)
                 my_printf("worse\n");
      }
}