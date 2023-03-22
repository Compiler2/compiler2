#include <header.h>

int main_bench()
{
    int n,k,i,j,sum,leap=0;
    int a[10001];
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       
      for(j=0;j<n;j++)
      {
          if(i==j)
            continue;
          else
          {
              sum=a[i]+a[j];
              if(sum==k)
               {
                   my_printf("yes");
                   leap=1;
                   break;
               }
          }
      }
      if(leap==1)
      break;

    }
    if(leap==0)
    my_printf("no");
    return 0;
}


