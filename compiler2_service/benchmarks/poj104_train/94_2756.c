#define NUM_ITER 5138

#include <header.h>

int main_bench()
{
    int sz[1000],a[1000],b[1000];
    int i,e,n,k,t;
    int m=1;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d", &(sz[i]));
    }
    for(k=1;k<=n;k++)
    {
        for(i=0;i<n-k;i++)
        {
            if(sz[i]>sz[i+1])
            {
                e = sz[i+1];
                sz[i+1] = sz[i];
                sz[i] = e;
            }
	}
    }
    for(i=0;i<n;i++)
    {
        a[i]=2*(sz[i]/2);
        if(a[i]!=sz[i])
        {
            b[m]=sz[i];
            t=m;
            m=m+1;
        }
    }
    for(m=1;m<t;m++)
    {
        my_printf("%d,",b[m]);
    }
    my_printf("%d",b[t]);
    return 0;
}

