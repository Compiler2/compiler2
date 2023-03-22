#include <header.h>

int main_bench()
{
  int n,m,i,a[101],b[101];
  my_scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    {
      my_scanf("%d",&a[i]);
      if(i+m<n) b[i+m]=a[i];
      if(i+m>=n) b[i+m-n]=a[i];
    }
  for(i=0;i<n-1;i++)
   {my_printf("%d ",b[i]);}
  if(i==n-1) my_printf("%d",b[i]);
  
}