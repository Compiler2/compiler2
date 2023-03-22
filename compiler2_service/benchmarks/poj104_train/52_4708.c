#include <header.h>

int main_bench(){

int a[100]={0},b[100]={0};
int n,m,i,k;
my_scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
   my_scanf("%d",&a[i]);
for(i=0;i<n-m;i++)
   b[i]=a[i];
  k=0;
for(i=n-m;i<n;i++,k++)
  a[k]=a[i];
  k=0;
for(i=m;i<n;i++,k++)
  a[i]=b[k];
  for(i=0;i<n-1;i++)
   my_printf("%d ",a[i]);
  my_printf("%d",a[n-1]);
   return 0;





}