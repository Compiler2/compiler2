#include <header.h>


int main_bench()
{
  int n,k,i,j,jude=0;
  my_scanf("%d %d",&n,&k);
  int a[n];
  for (i=0;i<=n-1;i++)
    my_scanf("%d",a+i);
  for (i=0;i<=n-1;i++)
  {
      for (j=i+1;j<=n-1;j++)
         if (a[i]+a[j]==k)
           {jude=1;break;}
   }
   if (jude==1)
   my_printf("yes");
   else
   my_printf("no");
  return 0;
}
