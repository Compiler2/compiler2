#define NUM_ITER 153

#include <header.h>


int main_bench()
{
    int i,m,n,p,k;
    int a[300];
    while (1>0)
    {
          my_scanf("%d %d",&n,&m);
          if(n==0)
          break;
          else
          {
              for(i=0;i<n;i++)
              a[i]=i+1;
              p=0;
              while(n!=1)
              {
                         k=(m+p-1)%n;
                         for(i=k;i<n;i++)
                         {
                                         a[i]=a[i+1];
                                         }
                                         n--;
                                         p=k;
                                         }
                                         my_printf("%d\n",a[0]);
                                         }
                                         }
                                        
                                        return 0;}