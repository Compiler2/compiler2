#define NUM_ITER 32579

#include <header.h>

main_bench()
{
      int n,m,i,j,k=1;
      int a[10000];
      my_scanf("%d",&n);
      if(n<5)my_printf("empty");
else{
      my_printf("3 5");
      for(i=5;i<=n-2;i=i+2)
      {
                         for(j=3;j<i;j=j+2)
                         {
                                            m=i%j;
                                            if(m==0)
                                            break;
                         }
                         if(j==i)
                         {
                                   for(k=3;k<i+2;k=k+2)
                                   {
                                                     m=(i+2)%k;
                                                     if(m==0)
                                                     break;
                                   }
                                   if(k==i+2)
                                   my_printf("\n%d %d",i,i+2);
                         }
      }}
}