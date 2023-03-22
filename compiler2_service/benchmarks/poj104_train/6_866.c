#include <header.h>

int main_bench()
{
  int a,i,t,j,sum,m,n;
  my_scanf("%d\n",&t);
  for(j=0;j<t;j++)
  {
   my_scanf("%d %d\n",&m,&n);
   sum=0;
   for(i=1;i<=m*n;i++)
   {
    my_scanf("%d",&a);
    if((i<=n)||(i>(m*n-n))||(i%n==1)||(i%n==0)) sum+=a;
   }
   my_printf("%d\n",sum);
   }
   return 0;
}