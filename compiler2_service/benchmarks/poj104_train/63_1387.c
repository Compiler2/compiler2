#include <header.h>

int main_bench()
{
    int z1[101][101];
    int z2[101][101];
    int z3[101][101];
    int m,n,q,i,j,k;
    my_scanf("%d%d",&m,&q);
    for (i=1;i<=m;i++)
        for (j=1;j<=q;j++)
        my_scanf("%d",&z1[i][j]);
    my_scanf("%d%d",&q,&n);
    for (i=1;i<=q;i++)
        for (j=1;j<=n;j++)
        my_scanf("%d",&z2[i][j]);
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
            {
                          z3[i][j]=0;
                          for (k=1;k<=q;k++)
                              z3[i][j]=z3[i][j]+z1[i][k]*z2[k][j];
            }
    for (i=1;i<=m;i++)
        {
        my_printf("%d",z3[i][1]);
        for (j=2;j<=n;j++)
        my_printf(" %d",z3[i][j]);
        my_printf("\n");
        }
}