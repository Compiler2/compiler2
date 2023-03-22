#include <header.h>

main_bench()
{
      int n,a,b,i,x,y;
      x=0;y=0;
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      {my_scanf("%d %d",&a,&b);
      if(a==0&&b==1||a==1&&b==2||a==2&&b==0)
      {x++;}
      if(a==1&&b==0||a==2&&b==1||a==0&&b==2)
      {y++;}
      }
      if(x>y)
      my_printf("A\n");
      if(x<y)
      my_printf("B\n");
      if(x==y)
      my_printf("Tie\n");
}
