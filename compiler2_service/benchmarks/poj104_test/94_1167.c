#include <header.h>

int main_bench()
{
 int n,i,k=0,j,a[500];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
  my_scanf("%d",&a[i]);
 for(i=1;i<1000;i++,i++)
 {
  for(j=0;j<n;j++)
  if(a[j]==i) 
  {k++;
   if(k==1)
    my_printf("%d",i);
   else my_printf(",%d",i);
   }}
 
}