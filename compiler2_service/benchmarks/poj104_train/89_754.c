#define NUM_ITER 352

#include <header.h>

int main_bench()
{
    int i,n,p,count=0,e=0;
    int a[10000],b[10000],c[10000],d[10000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    c[i]=0;
    }
    for(i=0;i<10000;i++)
    {
                        my_scanf("%d %d",&a[i],&b[i]);
                        e++;
                        if(a[i]==0&&b[i]==0)
                        break;
    }
    for(i=0;i<e;i++)
    {
                    p=b[i];
                    c[p]++;
                    p=a[i];
                    c[p]=-10000;
    }
    for(i=0;i<n;i++)
    {
                    if(c[i]==n-1)
                    {
                               my_printf("%d\n",i);
                               count=1;
                    }
    }
    if(count==0)
    {
                my_printf("NOT FOUND");
    }
    return 0;
}