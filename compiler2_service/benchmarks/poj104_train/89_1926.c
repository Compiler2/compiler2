#define NUM_ITER 39

#include <header.h>

main_bench()
{
      int i,j,a,b,c,d,e,f;
      int g[100000]; 
      my_scanf("%d",&a);
      for (i=0;i<a;i++)
      g[i]=1;
      for (i=0;i<100000;i++)
      {
          my_scanf("%d %d",&b,&c);
          if (b==0 && c==0)
          break;
          g[b]=-a;
          g[c]++;
      }
      d=0;
      for (i=0;i<a;i++)
      {
          if (g[i]==a)
          {
                      my_printf("%d",i);
                      d++;
                      
          }
      }
      if (d==0)
      my_printf("NOT FOUND");
      getchar ();
      
}
