#define NUM_ITER 35067

#include <header.h>

main_bench()
{
      int i,j,k,n,sa=0,sb=0,a,b;
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      my_scanf("%d %d",&a,&b);
                      if(a-b==-1 || a-b==2)sa++;
                      else if(a==b) {}
                      else sb++;
      }
      if(sa>sb)my_printf("A\n");
      else if(sa==sb)my_printf("Tie\n");
      else my_printf("B\n");
}