#include <header.h>

int main_bench()
{
    int feb(int x);
    int n,i,j,a[1000],f;
    my_scanf("%d",&n); 
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
    f=feb(a[j]);
    my_printf("%d\n",f);
    }
    getchar();
    getchar();
}
int feb(int x)
{
    int i;
    int a[x+1];
    a[1]=1;
    a[2]=1;
    for(i=3;i<=x;i++)
    a[i]=a[i-1]+a[i-2];
    return(a[x]);
}