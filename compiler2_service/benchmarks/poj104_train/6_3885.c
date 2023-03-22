#include <header.h>

int main_bench()
{
    int k;
    my_scanf("%d",&k);
    while(k--)
    {
        int m,n,sum=0;
        my_scanf("%d %d",&m,&n);
        int i,j,a[100][100];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                my_scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if((i==0)||(i==m-1)||(j==0)||(j==n-1))
                    sum=sum+a[i][j];
                else
                    continue;
            }
        }
        my_printf("%d\n",sum);
    }
    return 0;
}