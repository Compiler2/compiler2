#define NUM_ITER 49930

#include <header.h>

main_bench()
{
      int a[101]={0};
      int n,i,now,sign;
      
      my_scanf("%d",&n);
      sign=0;
      for (i=1;i<=n;i++)
      {
          my_scanf("%d",&now);
          if (a[now]==0)
          {
              a[now]=1;
              if (sign==1)
                  my_printf(" ");
              else
                  sign=1;
              my_printf("%d",now);
          }
      } 
      my_printf("\n");;
      return 0;      
}
