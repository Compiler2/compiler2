#include <header.h>

int a[110];
int main_bench()
{
 int n,i;
 my_scanf("%d",&n);
 for(i = 1;i <= n;i ++)
   my_scanf("%d",&a[n-i]);
 for(i = 0;i < n - 1;i ++)
   my_printf("%d ",a[i]);
 my_printf("%d",a[n-1]);

return 0;
}