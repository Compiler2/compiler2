#define NUM_ITER 47093

#include <header.h>

int main_bench() 
    {
      int i,j,h,n;
      int a[100],b[100];
      my_scanf("%d\n",&n);
      for(i=0;i<n;i++)
       my_scanf("%d",&a[i]);
      for(j=0;j<n;j++)
       b[j]=a[n-1-j];
      for(h=0;h<n-1;h++)
       my_printf("%d ",b[h]);
      my_printf("%d",b[n-1]);
     }
