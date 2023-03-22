#define NUM_ITER 313603

#include <header.h>

main_bench()
{
      int m,n,i,j,k,l,sum,t;
       my_scanf("%d",&m);
      while (m>1) 
      {
            if (m%2==1) 
            {
              my_printf("%d*3+1=%d\n",m,m*3+1);
              m=m*3+1;
              }
              else 
              {
                   my_printf("%d/2=%d\n",m,m/2);
                  m=m/2;
                  }
                  }
   my_printf("End");
     
       }
