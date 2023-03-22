#include <header.h>

int main_bench()
{
    int n,k,i,j,c,tag=0;
    int a[1000];
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=k-a[i];
        for(j=0;j<n;j++)
        {
            if(j==i)continue;
            if(c==a[j])tag=1;
            if(tag==1)break;
        }
        if(tag==1)break;
    }
    if(tag==1)my_printf("yes");
    if(tag==0)my_printf("no");
    return 0;
}