#define NUM_ITER 33819

#include <header.h>

main_bench()
{
   int n,i,sum1=0,sum2=0,a,b;
  my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
                 my_scanf("%d %d",&a,&b);
                 if(a==b)
                 sum1=sum1+0;
             if(a==0&&b==1)
             sum1++;
             if(a==1&&b==2)
             sum1++;
             if(a==2&&b==0)
             sum1++;
             if(a==0&&b==2)
             sum2++;
             if(a==1&&b==0)
             sum2++;
             if(a==2&&b==1)
             sum2++;
      
}
 if(sum1>sum2)
  my_printf("A");
  if(sum1==sum2)
  my_printf("Tie");
  if(sum1<sum2)
  my_printf("B");
}