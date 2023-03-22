#define NUM_ITER 47

#include <header.h>

main_bench()
{
    int x,y,q;
    int a[100][100],b[100][100],c[100][100];
    my_scanf("%d%d",&x,&q);

    for (int i = 0;i < x;i ++)
        for (int j = 0;j < q;j ++)
            my_scanf("%d",&a[i][j]);
    my_scanf("%d%d",&q,&y);

    for (int i = 0;i < q;i ++)
        for (int j = 0;j < y;j ++)
            my_scanf("%d",&b[i][j]);
    for (int i = 0;i < x;i ++)
        for (int j = 0;j < y;j ++)
        {
            c[i][j]=0;
            for (int s = 0;s < q;s ++)
                c[i][j]=c[i][j]+a[i][s]*b[s][j];
        }
    for (int i = 0;i < x;i ++)
    {
        for (int j = 0;j < y;j ++)
        {
            if (j == 0)
                my_printf("%d",c[i][j]);
            else
                my_printf(" %d",c[i][j]);
        }
        my_printf("\n");
    }
}