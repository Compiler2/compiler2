#include <header.h>

void order(int m,int n)
{  int i,s[100];
  for(i=0;i<m;i++)
  my_scanf("%d",&s[i]);
  for(i=m-n;i<m;i++)
  my_printf("%d ",s[i]);
  for(i=0;i<m-n-1;i++)
  my_printf("%d ",s[i]);
  my_printf("%d",s[i]);
}
main_bench()
{ int a,b;
  my_scanf("%d %d",&a,&b);
  order(a,b);
}

