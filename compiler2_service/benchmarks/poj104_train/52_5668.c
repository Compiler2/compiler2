#define NUM_ITER 48036

#include <header.h>

void swap(int x,int y,int a[])
{
    int t;
    while(x<y)
    {
        t=a[x];
        a[x]=a[y];
        a[y]=t;
        x++;
        y--;
    }
}
int main_bench()
{
    int n,m,a[100],i;
    my_scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) my_scanf("%d",&a[i]);
    swap(0,n-1,a);
    swap(0,m-1,a);
    swap(m,n-1,a);
    my_printf("%d",a[0]);
    for(i=1;i<n;i++) my_printf(" %d",a[i]);
}