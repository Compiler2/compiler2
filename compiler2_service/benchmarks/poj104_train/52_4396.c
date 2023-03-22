#include <header.h>

int main_bench()
{
    int i,j,k,m,n,a[100];
    int *p;
    p=a;
    my_scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    p=p+n-m;
    for(i=0;i<m;i++)
      my_printf("%d ",*(p+i));
      p=a;
      for(i=0;i<n-m-1;i++)
      my_printf("%d ",*(p+i));
      my_printf("%d",*(p+i));
      return 0;
}
    
    
