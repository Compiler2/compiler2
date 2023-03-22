#define NUM_ITER 1

#include <header.h>

int f(int a, int b)
{
    if(a>=b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
main_bench()
{
    int n,i,j,t,sum,x,y,r;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a[100][100]={0};
        int b[100][100]={0};
        sum=0;
        for(j=0;j<n;j++)
        {
            for(t=0;t<n;t++)
            {
                my_scanf("%d",&a[j][t]);
                b[j][t]=a[j][t];
            }
        }
        for(r=0;r<n-1;r++)
        {
            for(j=0;j<n;j++)
            {
                x=0;
                for(t=0;t<n-1;t++)
                {
                    a[j][t+1]=f(a[j][t],a[j][t+1]);
                }
                x=a[j][t];
                for(t=0;t<n;t++)
                {
                    b[j][t]=b[j][t]-x;
                    a[j][t]=b[j][t];
                }
            }
            for(j=0;j<n;j++)
            {
                y=0;
                for(t=0;t<n-1;t++)
                {
                    a[t+1][j]=f(a[t][j],a[t+1][j]);
                }
                y=a[t][j];
                for(t=0;t<n;t++)
                {
                b[t][j]=b[t][j]-y;
                a[t][j]=b[t][j];
                }
            }
            sum=sum+a[1][1];
            for(j=0;j<n;j++)
            {
                for(t=1;t<n-1;t++)
                {
                   a[t][j]=a[t+1][j];
                   b[t][j]=a[t][j];
                }
            }
            for(j=0;j<n;j++)
            {
                for(t=1;t<n-1;t++)
                {
                   a[j][t]=a[j][t+1];
                   b[j][t]=a[j][t];
                }
            }
        }
        my_printf("%d\n",sum);
    }
}