#define NUM_ITER 6220

#include <header.h>

int main_bench()
{
    int n,sz[400],i,k;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&sz[i]);
    }
    my_printf("%d",sz[0]);
    for(i=1;i<n;i++)
    {
         int t=0;           
         for(k=0;k<i;k++)
         {
              if(sz[k]==sz[i])
              {
                   t=1;
              }
              if(t==1)
              {
                      continue;
              }
         }
         if(t==1)
         {
                 continue;
         }
         else
         {
             my_printf(",%d",sz[i]);
         }
    }
    return 0;
}                                             
                    
