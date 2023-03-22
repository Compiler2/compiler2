#include <header.h>

int main_bench()
{
int t,N[1000][1000],i,j,n,m,a=0,b=0,s;
my_scanf("%d",&t);
for(i=0;i<t;i++)
{
  for(j=0;j<t;j++)
  {
  my_scanf("%d",&N[i][j]);
  }
}
for(i=0;i<t;i++)
{
  for(j=0;j<t;j++)
  {
   if(N[i][j]==0)
   {
   n=i;m=j;
   }
  }
}
for(i=n,j=m;j<t;j--)
{
 if(N[i][j]==0)
a++;
 else break;
}
for(j=m,i=n;i<t;i--)
{
if(N[i][j]==0)
b++;
else break;
}
s=(a-2)*(b-2);
my_printf("%d",s);
return 0;
}