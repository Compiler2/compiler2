#define NUM_ITER 25073

#include <header.h>

int main_bench()
{
   int n,i,k;
   float bz,qt,cha;
   my_scanf("%d",&n);
   int gs[1000][2];
   for(i=0;i<n;i++)
     {
        for(k=0;k<2;k++)
          {
             my_scanf("%d",&gs[i][k]);
          }
      }
   bz=(float)gs[0][1]/gs[0][0];
   for(i=1;i<n;i++)
     {
        qt=(float)gs[i][1]/gs[i][0];
        cha=qt-bz;
        if(cha>0.05)
          {
             my_printf("better\n");
           }
         else if(cha<-0.05)
            {
               my_printf("worse\n");
             }
         else my_printf("same\n");
      }
   return 0;
}
 





               