#include <header.h>

int a[105];
int main_bench()
{
  int n,i,j;
  int m,k;
  my_scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)
    my_scanf("%d",&a[i]);
  for(i = m;i >= 1;i --)
  {
     k = a[n - i + 1];      
    for(j = n - i + 1;j >= m - i + 2;j --)    
          a[j] = a[j-1];    
    a[m - i + 1] = k;        
  }
  for(i = 1;i < n;i ++)
     my_printf("%d ",a[i]);
  my_printf("%d",a[n]);
 return 0;
}
