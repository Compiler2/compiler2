#define NUM_ITER 16065

#include <header.h>


main_bench()
{
      int i,j,k,m,n;
      int sushu(int a);
      my_scanf("%d",&n);
      if(n<=4)
      my_printf("empty");
      for(i=3;i<=n;i=i+2)
      {
                       if(sushu(i)==1&&sushu(i+2)&&i+2<=n)
                       my_printf("%d %d\n",i,i+2);
                       }
                       
                       
      
      }

int sushu(int m)
{
    int b;
    for(b=2;b<=m-1;b++)
    if(m%b==0)
    return 0;
    return 1;
    }