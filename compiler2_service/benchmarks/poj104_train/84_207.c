#define NUM_ITER 58525

#include <header.h>

 int main_bench()
 {
 int a=1,b=0;
 int n ,i;
 int x ,q;

 my_scanf("%d",&n);
 for(i=0;i<n;i++)
    {
       my_scanf("%d",&x);

       q=(x>a)+(x>b)  ;

       switch(q)
       {
       case 2:

          b=a,a=x;
          break;
       case 1:
          b=x;
          break;
       case 0:
          break;

       }
    }
  my_printf("%d\n%d",a,b);

  
  return 0;

  }