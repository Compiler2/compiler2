#include <header.h>

int t[10001];
int main_bench()
{
   int i,n,m=0,t=0,x,y;
   my_scanf("%d",&n);
    for(i=0;i<n;i++)
{
    my_scanf("%d%d",&x,&y);
    if(x>=90&&x<=140&&y<=90&&y>=60){t++;m=m>t?m:t;}
    else t=0;
}
    my_printf("%d",m);
    return 0;
}
