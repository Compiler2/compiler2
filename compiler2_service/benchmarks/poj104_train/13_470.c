#define NUM_ITER 9747

#include <header.h>

main_bench()
{
  int n,i,j,a[100000],b[100000],k,sum=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
    my_scanf("%d",&a[i]); 
  my_printf("%d",a[0]);
  for(i=1;i<n;i++)
  { 
    for(j=0;j<i;j++)
    {
      if(a[i]==a[j])
       break;
      else if(j==i-1)
        my_printf(" %d",a[i]);
    }
  }
}