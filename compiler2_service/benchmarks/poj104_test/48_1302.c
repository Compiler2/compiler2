#define NUM_ITER 1256

#include <header.h>

int main_bench()
{
    int a[11][11],b[11][11];
    int m,n,i,j,k;
    my_scanf("%d %d",&m,&n);
    for(i=0;i<11;i++)
    {
        for(j=0;j<11;j++)
        {
            a[i][j]=0;
            b[i][j]=0;
        }
    }
    a[5][5]=m;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<10;i++)
        {
            for(j=1;j<10;j++)
            {
                b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            }
        }
        for(i=0;i<11;i++)
        {
            for(j=0;j<11;j++)
            {
                a[i][j]=b[i][j];
            }
        }
    }
        for(i=1;i<10;i++)
        {
            for(j=1;j<9;j++)
            {
                my_printf("%d ",a[i][j]);
            }
            my_printf("%d\n",a[i][9]);
        }
        return 0;
}