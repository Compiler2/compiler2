#define NUM_ITER 19305

#include <header.h>

int main_bench()
{
    int j,k,l,n,i;
    my_scanf("%d",&n);
    j=2;
    k=2;
    if(n>=5)
    {
       for(l=3;l<=n;l++)
       {
          for(i=2;i<l;i++)
          {
             if(l%i==0)
               break;
          }
          if(i==l)
          {
             j=k;
             k=l;
             if(k-j==2)
                my_printf("%d %d\n",j,k);
          }
       }
    }
    else
    my_printf("empty");           
    return 0;
}       
