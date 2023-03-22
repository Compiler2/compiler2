#define NUM_ITER 51022

#include <header.h>

int main_bench()
{
   int i,a[100];
   int n;
   my_scanf("%d\n",&n);
   for(i=0;i<n;i++){
   my_scanf("%d ",&a[i]);
}

   for(i=n-1;i>=1;i--){
   my_printf("%d ",a[i]);
}
   for(i=0;i>=0;i--){
   my_printf("%d",a[i]);
}

   return 0;
}

