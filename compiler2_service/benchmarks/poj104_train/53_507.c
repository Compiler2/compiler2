#include <header.h>

int main_bench()
{
 int n,i,a[300],hash[300],j=0,k,flag;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 my_scanf("%d",&a[i]);
 my_printf("%d",a[0]);
 hash[0]=a[0];
 for(i=1;i<n;i++)
 {
  flag=1;
  for(k=0;k<=j;k++)
   if(a[i]==hash[k])
    flag=0;
  if(flag)
   {
    my_printf(",%d",a[i]);
    hash[++j]=a[i];
   }
 }
 my_printf("\n");

}