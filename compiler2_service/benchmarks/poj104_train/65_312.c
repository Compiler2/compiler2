#define NUM_ITER 37104

#include <header.h>


main_bench()
{
      int n;
      my_scanf("%d",&n);
      int a=0,b=0;
      for (int i=0;i<n;i++)
      {
          int x,y;
          my_scanf("%d %d",&x,&y);
          if (x-y==-1 || x-y==2) a++;
          else if (x==y) continue;
          else b++;
          
          
      }
      if (a>b) my_printf("A\n");
      else if (a<b) my_printf("B\n");
      else my_printf("Tie\n");
      
      
      
      
      
      
  
}