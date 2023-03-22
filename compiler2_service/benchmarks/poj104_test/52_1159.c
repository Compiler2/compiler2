#include <header.h>

int main_bench()
{
int i,j,k;
int n,m;
int *p,a[100];
p=a;
my_scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
  my_scanf("%d",p+i);
for(i=0;i<m;i++)
  my_printf("%d ",*(p+i+n-m));
for (i=m;i<n-1;i++)
  my_printf("%d ",*(p+i-m));
 my_printf("%d",*(p+n-m-1));

}