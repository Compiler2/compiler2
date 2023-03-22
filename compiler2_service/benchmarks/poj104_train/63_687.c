#define NUM_ITER 31

#include <header.h>

main_bench()
{
    int a[100][100],b[100][100],c[100][100];
    int ai,aj,bi,bj,i,j,k;
    my_scanf ("%d %d",&ai,&aj);
    for (i=0;i<ai;i++)
    {
        for(j=0;j<aj;j++)
        {
            my_scanf("%d",&a[i][j]);
        }
    }
    my_scanf ("%d %d",&bi,&bj);
    for (i=0;i<bi;i++)
    {
        for(j=0;j<bj;j++)
        {
            my_scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<ai;i++)
    {
        for(j=0;j<bj;j++)
        {
            for (k=0,c[i][j]=0;k<aj;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for (i=0;i<ai-1;i++)
    {
        my_printf("%d",c[i][0]);
        for(j=1;j<bj;j++)
        {
            my_printf(" %d",c[i][j]);
        }
        my_printf("\n");
    }
    my_printf("%d",c[ai-1][0]);
        for(j=1;j<bj;j++)
        {
            my_printf(" %d",c[ai-1][j]);
        }
}
