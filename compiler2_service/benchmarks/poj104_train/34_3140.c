#define NUM_ITER 305780

#include <header.h>

main_bench()
{
      int a,b=0;
      my_scanf("%d",&a);
      do
      {
                     if(a==1)
                     break;
                     if(a%2!=0)
                     {
                          b=a;
                          a=a*3+1;
                          my_printf("%d*3+1=%d\n",b,a);
                     }
                     else
                     {
                         b=a;
                         a=a/2;
                         my_printf("%d/2=%d\n",b,a);
                     }
      }
      while(a!=1);
      if(a==1)
      my_printf("End");
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}