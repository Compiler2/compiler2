#define NUM_ITER 32

#include <header.h>

main_bench()
{
    int k,m,n,i,j,sum,a[100][100];
    my_scanf("%d",&k);
    for(;k>0;k--)
    {
        sum=0;
        my_scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            my_scanf("%d",&a[i][j]);
        }
        for(i=0,j=0;j<n;j++)
        sum=sum+a[i][j];
        for(i=m-1,j=0;j<n;j++)
        sum=sum+a[i][j];
        for(i=0,j=0;i<m;i++)
        sum=sum+a[i][j];
        for(i=0,j=n-1;i<m;i++)
        sum=sum+a[i][j];
        sum=sum-a[0][0]-a[m-1][0]-a[0][n-1]-a[m-1][n-1];
        my_printf("%d\n",sum);
    }
}
