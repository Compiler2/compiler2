#define NUM_ITER 54840

#include <header.h>

int main_bench()
{
  int *p;
  int a[100],n,m,i;
  my_scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)   my_scanf("%d",&a[i]);
  p=&a[1+n-m];
  my_printf("%d",*p);
  p=&a[2+n-m];
  for(i=0;i<=m-2;i++)  
  my_printf(" %d",p[i]);
  p=&a[1]; 
  for(i=0;i<=n-m-1;i++) 
  my_printf(" %d",p[i]);
  return 0;
}