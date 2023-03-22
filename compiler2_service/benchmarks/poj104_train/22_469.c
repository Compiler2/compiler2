#include <header.h>

int main_bench()
{
  int a[300],n,i,j,t,k;
  my_scanf("%d",&a[0]);
  for(i=1;;i++)
  {
    if(getchar()==',')
    my_scanf("%d",&a[i]);
    else
    break;
  }
 for(j=0,t=0;j<i;j++)
{
  if(a[j]>t)
  t=a[j];
}
for(j=0,k=0;j<i;j++)
{ 
   if(a[j]==t)
   continue;
   else if(a[j]>k)
   k=a[j];
 }
if(k==0)
my_printf("No");
else
my_printf("%d",k);
return 0;
}
  
  