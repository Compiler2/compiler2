#include <header.h>

int main_bench()
{
    int n,i,a=0,b=0;
    my_scanf("%d",&n);
    int q[n],p[n];
    for(i=0;i<n;i++)
    {my_scanf("%d%d",&q[i],&p[i]);
    if(q[i]==0&&p[i]==1||(q[i]==1&&p[i]==2)||(q[i]==2&&p[i]==0))a=a+1;
    if(p[i]==0&&q[i]==1||(p[i]==1&&q[i]==2)||(p[i]==2&&q[i]==0))b=b+1;
    }
    if(a>b)my_printf("A");
    if(a<b)my_printf("B");
    if(a==b)my_printf("Tie");
    return 0;
    
}