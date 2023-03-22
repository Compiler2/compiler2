#define NUM_ITER 14002

#include <header.h>

int main_bench()
{ int n,i,k;
  int a[20000];
  my_scanf("%d\n",&n);
  for (i=0;i<=(n-1);i++)
  my_scanf("%d",&a[i]);
  for (i=(n-1);i>=0;i--)
     { for (k=i-1;k>=0;k--)
       if ((a[i]-a[k])==0) {a[i]=0;break;}
      } 
  if (a[0]>9) my_printf("%d",a[0]);
   for (i=1;i<=(n-1);i++)
  {if (a[i]>9)
   my_printf(" %d",a[i]);
   } 
   }