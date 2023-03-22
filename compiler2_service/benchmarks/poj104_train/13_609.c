#include <header.h>

 int main_bench()
 {
  int n,i,j;
  my_scanf("%d",&n);
  int a[n];
  for (i=0;i<n;i++)
  my_scanf("%d",&a[i]);
  i=0;
  while (i<n)
  { for (j=i+1;j<n;j++)
   if (a[i]==a[j]) a[j]=0;
   i++;}
  my_printf("%d",a[0]);
  i=1;
  for (i=1;i<n;i++)
  if (a[i]!=0) my_printf(" %d",a[i]);
}