#include <header.h>

int main_bench()
{
int n,a[20000],i,j,f;

my_scanf("%d%d",&n,a);
my_printf("%d",*a);
for(i=1;i<n;i++)
{
  f=0;
  my_scanf("%d",a+i);
  for(j=0;j<i;j++)
  {
   if(*(a+i)==*(a+j))
   f=1; 
  }
if(f==0)
my_printf(" %d",*(a+i));
else continue;
}
return 0;
}

