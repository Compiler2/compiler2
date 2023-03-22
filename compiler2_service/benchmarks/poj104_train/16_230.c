#define NUM_ITER 1500618

#include <header.h>

int main_bench()
{int a,n;
  my_scanf("%d",&n);
if(n==0) my_printf("%d\n",n);
else{
for(;n>0;)
  {a=n%10;
   my_printf("%d",a);
   n=n/10;
   }
}
my_printf("\n");
return 0;
}