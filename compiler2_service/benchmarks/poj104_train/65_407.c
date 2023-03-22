#define NUM_ITER 31580

#include <header.h>

int main_bench()
{
    int l,i,m=0,n=0,a[100],b[100];
    my_scanf("%d",&l);
    for(i=0;i<=l-1;i++)
    {
         my_scanf("%d",&a[i]);
         my_scanf("%d",&b[i]);
         if(a[i]!=b[i])
         {
              if(a[i]==1&&b[i]==0)
                    n++;
              else if(a[i]==0&&b[i]==1)
                    m++;
              else if(a[i]==2&&b[i]==1)
                    n++;
              else if(a[i]==1&&b[i]==2)
                    m++;
              else if(a[i]==0&&b[i]==2)
                    n++;
              else if(a[i]==2&&b[i]==0)
                    m++;
         }
    }
    if(m>n)
       my_printf("A");
    else if(m<n)
       my_printf("B");
    else
       my_printf("Tie");
    return 0;
}