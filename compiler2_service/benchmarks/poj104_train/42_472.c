#include <header.h>

main_bench()
{
  int n,a[100001],k,i,j,num=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    my_scanf("%d",&a[i]);
  }
  my_scanf("%d",&k);
  for(i=0;i<n;i++)
  {  
    if(a[i]==k)
     {
      num++;
      for(j=i;j<n;j++)
      a[j]=a[j+1];
     }
     if(a[i]==k)
     i--;
  }
  my_printf("%d",a[0]);
  for(i=1;i<(n-num);i++)
   my_printf(" %d",a[i]);
}