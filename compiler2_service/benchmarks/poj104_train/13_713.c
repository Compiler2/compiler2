#define NUM_ITER 9939

#include <header.h>

main_bench()
{
      int n,i,j;
      int a[20000];
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
        my_scanf("%d",&a[i]);
      for(i=1;i<n;i++)
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j]&&a[i]!=0)
                a[i]=0;
        }
        for(i=0;i<n;i++)
        {
              if(i==0)
                 my_printf("%d",a[i]);
                 else
                   {
                       if(a[i]!=0)
                       my_printf(" %d",a[i]);
                   }
        }
    
}