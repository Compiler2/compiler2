#define NUM_ITER 44554

#include <header.h>

int main_bench()
{
    int n,m,i;
    my_scanf("%d%d",&n,&m);
    while(n!=0&&m!=0)
    {
    int bh=0;
    if(n==1){my_printf("1\n");}
    else
    {
        for(i=2;i<=n;i++)
        {
            bh=(bh+m)%i;
        }
        my_printf("%d\n",bh+1);
    }
    my_scanf("%d%d",&n,&m);
    }
    return 0;
}