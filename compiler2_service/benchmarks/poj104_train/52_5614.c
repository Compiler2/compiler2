#include <header.h>

int n,m,a[101];
void toscan()
{
  int i;
  my_scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
}

void yidong(int n,int m,int a[])
{
  int t,i,j;
  for(i=0;i<m;i++)
   { for(j=n;j>0;j--)
        a[j]=a[j-1];
     a[0]=a[n];
   }
}

void toprint()
{ int i;
  my_printf("%d",a[0]);
  for(i=1;i<n;i++)
    my_printf(" %d",a[i]);
}
main_bench()
{
  toscan();
  yidong(n,m,a);
  toprint();
  return 0;
}
