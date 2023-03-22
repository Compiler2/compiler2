#include <header.h>

int main_bench()
{
  int m,n,i,j,k;
  my_scanf("%d %d",&m,&n);
  int a[m+n];
  my_scanf("%d",&a[n]);
  for(i=1;i<m;i++)
  my_scanf(" %d",&a[n+i]);
   for(i=0;i<n;i++)
  a[i]=a[m+i];
  my_printf("%d",a[0]);
   for(i=1;i<m;i++)
 my_printf(" %d",a[i]);
return 0;
}   