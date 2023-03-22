#define NUM_ITER 50098

#include <header.h>

int main_bench(){
  int x[100],y[100];
  int i,n,j;
  my_scanf("%d",&n);
  for(i=0,j=n-1;i<n;i++,j--)
   {my_scanf("%d",&x[i]);
    y[j]=x[i];}
  for(j=0;j<n-1;j++)
   {my_printf("%d ",y[j]);}
   my_printf("%d",y[n-1]);
   return 0;
}
