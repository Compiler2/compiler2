#include <header.h>

int main_bench()
{
  int i,k,t,x,a[20000],n,m,l;
  l=0;
  m=0;
  my_scanf("%d",&n);
  for(k=1;k<=n;k++)
  {
    my_scanf("%d",&x);
    
	for(i=1;i<=m+1;i++)
		if(x==a[i-1])l=1;
    if(l==0)
	{
       a[m]=x;
       m=m+1;
	}
	l=0;
   }
   my_printf("%d",a[0]);
   for(t=1;t<=m-1;t++)
    my_printf(" %d",a[t]);
   my_printf("\n");
   return 0;
}