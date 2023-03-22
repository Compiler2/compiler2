#include <header.h>


int main_bench()
{
  int n,i,m,j,ans,t,tmp;
  my_scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    my_scanf("%d",&m);
    t=0;
    ans=60;
    for (j=1;j<=m;j++)
    {
       my_scanf("%d",&tmp);
       if (tmp+t<=60)
       {
          t+=3;
          if (tmp+t>60)
            ans-=63-tmp-t;
          else
            ans-=3;
       }
    }
    my_printf("%d\n",ans);
  }
}