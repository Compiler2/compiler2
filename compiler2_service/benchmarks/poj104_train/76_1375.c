#define NUM_ITER 2986

#include <header.h>

int main_bench()
{
    int a[60000],b[60000],n,i,m,p,q,s; 
    float k;
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d %d",&a[i],&b[i]);
    }
    p=a[0];
    q=b[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<p)
        {
            p=a[i];
        }
        if(b[i]>q)
        {
            q=b[i];
        }
    }
    for(k=p+0.5;k<=q;k++)
    {
        s=0;
        for(m=0;m<n;m++)
        {
            if(k<=b[m]&&k>=a[m])
            {
                s=1;
            }
            else
            {
                s=s;
            }
        }
        if(s==0)
        {
            my_printf("no");
            break;
        }
    }
    if(s!=0)
    {
        my_printf("%d %d",p,q);
    }
    return 0;
}