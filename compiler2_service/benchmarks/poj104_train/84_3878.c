#define NUM_ITER 61457

#include <header.h>

int main_bench(){
   int n, i, a, b ,c;
   my_scanf("%d", &n);
   for(i=1,a=0,b=0;i<=n;i++){
   my_scanf("%d", &c);
   if(c>a)
      b=a,a=c;
   else if(c>b)
      b=c;
   }
   my_printf("%d\n", a);
   my_printf("%d", b);
   return 0;
}
    
   