#define NUM_ITER 1409137

#include <header.h>

int main_bench()
{
  int a[10];
  int n,i,j;
  my_scanf("%d",&n);
  if (n==0) {my_printf("0\n");return 0;}
  for(i=1;n>0;i++)
   {
    a[i]=n%10;
    n=n/10;
   }
   for(j=1;j<=i-1;j++)
   my_printf("%d",a[j]);

   return 0;
}
  