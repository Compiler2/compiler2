#include <header.h>

int main_bench()
{int n,a[100000],k,i,j;
 my_scanf("%d",&n);
  for(i=0;i<n;i++)
   my_scanf("%d",&a[i]);
  my_scanf("%d",&k);
   for(i=0;i<n;i++)
   if(a[i]==k) a[i]=65500;
    for(i=0;i<n;i++)
    if(a[i]!=65500)
   {my_printf("%d",a[i]);break;}
    for(j=i+1;j<n;j++)
    if(a[j]!=65500)
    my_printf(" %d",a[j]);
   return 0;
}