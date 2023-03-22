#define NUM_ITER 402706

#include <header.h>


main_bench()
{
      int w,i;
      my_scanf("%d",&w);
      int a[11]={31,28,31,30,31,30,31,31,30,31,30};
      
      if((w+12%7)%7==5)
          my_printf("1\n");
      w=(w+12%7)%7;
      for(i=0;i<11;i++)
      {
          if((w+a[i]%7)%7==5)
              my_printf("%d\n",i+2);
          w=(w+a[i]%7)%7;
      }
}
