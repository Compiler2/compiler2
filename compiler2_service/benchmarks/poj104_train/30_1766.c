#include <header.h>

int have7(int i)
{
    if (i%10==7||(int)((i/10))%10==7)
        return 0;
    else
        return 1;
}
int main_bench()
{
    int n,i,s=0;
    my_scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        if ((i%7!=0)&&(have7(i)))
            s=s+i*i;
    }
    my_printf("%d",s);
    return 0;
}
