#include <header.h>

int main_bench()
{
    int n,m,i,j,p,q;
    my_scanf("%d",&n);
    m=0;
    for(i=0;i<n;i++)
    {
        my_scanf("%d %d",&p,&q);
        if(p==q)
        continue;
        if((p==0&&q==1)||(p==1&&q==2)||(p==2&&q==0))
        m++;
        else
        m--;
    }
    if(m==0)
    my_printf("Tie");
    if(m>0)
    my_printf("A");
    if(m<0)
    my_printf("B");
    return 0;
    
}