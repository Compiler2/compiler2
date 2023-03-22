#define NUM_ITER 1671

#include <header.h>

int main_bench()
{
    int n,i,p,q,j,d;
    my_scanf("%d",&n);
    
    int sz[n],sa[n];
    for(i=0;i<n;i++)
    {
    my_scanf("%d%d",&sz[i],&sa[i]);
    }
    p=sz[0];
    q=sa[0];
    for(i=0;i<n;i++)
    {
        if(sz[i]<p)
        p=sz[i];
        if(sa[i]>q)
        q=sa[i];
    }
    float s;
    for(s=p;s<q+0.5;s=s+0.5)
    {
        d=0;
        for(j=0;j<n;j++)
        {
            if(s<sz[j]||s>sa[j])
            d++;
        }
        if(d==n)
        {my_printf("no");
        return 0;}
        
    }
    my_printf("%d %d",p,q);
    return 0;
    
    
}

