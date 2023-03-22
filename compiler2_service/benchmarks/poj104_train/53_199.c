#include <header.h>

int main_bench()
{
 int n,i,j,c=0,d,f,g[301];
 my_scanf("%d%d",&n,&g[1]);
 my_printf("%d",g[1]);
 c=1;
 for (i=2;i<=n;i++)
   {
   my_scanf("%d",&d);
   f=1;
   for (j=1;j<=c;j++)
     if (g[j]==d)
       {f=0;break;}
   if (f==1)
     {
     c=c+1;g[c]=d;my_printf(",%d",d);
     }
   }
 my_printf("\n");
 }