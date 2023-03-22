#define NUM_ITER 197955

#include <header.h>

int reverse(int x)
{
    int a[20];
    int i,j,t,y,l=0;
    for(i=0;i<20;i++) a[i]=0;
    while (x!=0)
    {
        a[l]=x%10;
        x/=10;
        l+=1;
    }
    y=0;
    t=1;
    for (i=0;i<=l;i++)
    {
        for(j=l-1;j>i;j--)
        {
            t*=10;
        }
        y+=a[i]*t;
        t=1;
    }
    return(y);
}
main_bench()
{
      int i,n;
      for (i=0;i<=5;i++)
      {
          my_scanf("%d",&n);
          if (n<0)
          {
              my_printf("-");
              n=-n;
          }
          n=reverse(n);
          my_printf("%d\n",n);
      }
      getchar();
      getchar();
}
