#include <header.h>

int main_bench()
{
    int n,i,j,t;
    my_scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    int *f=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        my_scanf("%d",&p[i]);
    for(i=0;i<n;i++)
        f[i]=0;
    for(i=0;i<n;i++)
    {
        t=0;
        for(j=0;j<=i;j++)
        {
            if(p[i]<=p[j]&&t<=f[j])
                t=f[j];
        }
        f[i]=t+1;
    }
    for(i=0,t=1;i<n;i++)
    {
        if(t<f[i])
            t=f[i];
    }
    my_printf("%d\n",t);
    }
            