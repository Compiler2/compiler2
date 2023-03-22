#include <header.h>


int main_bench()
{
    int t,a[200],b[200],m=0,n=0,i;
    my_scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        my_scanf("%d %d",&a[i],&b[i]);
        if(a[i]==0&&b[i]==1)
            m=m+1;
        if(a[i]==1&&b[i]==2)
            m=m+1;
        if(a[i]==2&&b[i]==0)
            m=m+1;
        if(a[i]==0&&b[i]==2)
            n=n+1;
        if(a[i]==2&&b[i]==1)
            n=n+1;
        if(a[i]==1&&b[i]==0)
            n=n+1;
    }
    if(m>n)
        my_printf("A");
    if(m<n)
        my_printf("B");
    if(m==n)
        my_printf("Tie");
    return 0;
}