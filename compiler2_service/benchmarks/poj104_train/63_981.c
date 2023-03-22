#include <header.h>


int main_bench()
{
    int a[110][110], b[110][110], c[110][110];
    int i, j, k, x1, x2, y1, y2;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    my_scanf("%d %d", &x1, &y1);
    for(i=1; i<=x1; i++)
    {
        for(j=1; j<=y1; j++)
        {
            my_scanf("%d", &a[i][j]);
        }
    }
    my_scanf("%d %d", &x2, &y2);
    for(i=1; i<=x2; i++)
    {
        for(j=1; j<=y2; j++)
        {
            my_scanf("%d", &b[i][j]);
        }
    }
    for(i=1; i<=x1; i++)
    {
        for(j=1; j<=y2; j++)
        {
            for(k=1; k<=y1; k++)
            {
                c[i][j] += (a[i][k]*b[k][j]);
            }
        }
    }
    for(i=1; i<=x1; i++)
    {
        for(j=1; j<y2; j++)
        {
            my_printf("%d ", c[i][j]);
        }
        my_printf("%d\n", c[i][y2]);
    }
    return 0;
}
