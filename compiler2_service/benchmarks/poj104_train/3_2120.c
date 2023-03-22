#include <header.h>

int main_bench()
{
  int n,k,i=0,j,x=0;
  my_scanf("%d%d",&n,&k);
  int a[n];
  for(;i<=n-1;i++)
  {my_scanf("%d",a+i);
  for(j=0;j<=i-1;j++)
  if(a[i]+a[j]==k) {x=1;break;}
  if(x==1) {my_printf("yes");break;}
  }
  if(x==0) my_printf("no");
  return 0;
}
