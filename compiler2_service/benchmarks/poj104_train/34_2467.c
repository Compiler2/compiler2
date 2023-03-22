#define NUM_ITER 371903

#include <header.h>

main_bench()
{
      int n,a=3,b=1,c=2,s;
      my_scanf("%d",&n);
      while(n!=1)
      {
                 if(n%2==1)
                 {
                           s=n*a+b;
                 my_printf("%d*%d+%d=%d\n",n,a,b,s);
                 }
                 else
                 {
                     s=n/c;
                 my_printf("%d/%d=%d\n",n,c,s);
                 }
                 n=s;
      }
      my_printf("End");
      getchar();
      getchar();
}