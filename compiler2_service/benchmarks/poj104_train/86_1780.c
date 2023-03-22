#include <header.h>


int main_bench()
{
    int i, j, n, m, c, t;

    my_scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        c = 60;
        my_scanf("%d",&m);
        for(j = 1; j <= m; j++)
        {
            my_scanf("%d",&t);
            if(t < c)
                c = (t + 3 > c) ? t : (c - 3);
        }
        my_printf("%d\n",c);
    }
    return 0;
}