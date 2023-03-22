#include <header.h>

int main_bench()
{
    int m,n,i,y=0,h,x=1;
    for(h=1;h<=20;h++)
    
{
    my_scanf("%d %d",&n,&m);
    if(m!=0&&n>=2)
    
{
    for(i=2;i<=n;i++)
    y=(y+m)%i;
    my_printf("%d\n",y+1);
    y=0;
}
    else if(n==1)
    my_printf("%d\n",x);
    else if(m==0&&n==0) 
    break;
}
 
}
