#include <header.h>

main_bench()
{
      int n,i,a=0,b=0,x,y;
      my_scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
         my_scanf("%d%d",&x,&y);
         if(y-x==0) continue;
         if(x-y==-1||x-y==2) a++;
         else b++;
      }
      if(a>b) my_printf("A\n");
      if(a<b) my_printf("B\n");
      if(a==b) my_printf("Tie\n");
}
