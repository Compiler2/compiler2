#include <header.h>

int main_bench()
{
  int a=0,b=0,c,d,n,i;
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
{ my_scanf("%d",&d);
if (a<d)
 {
  c=a;
  a=d;
  d=c;}
  if(a<b)
  {c=a;
  a=b;
  b=c;}
  if(b<d)
  {c=b;
  b=d;
  d=c;
 }
}
my_printf("%d\n%d\n",a,b);
return 0;
}
