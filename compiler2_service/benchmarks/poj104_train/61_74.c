#include <header.h>

int main_bench()
{
    int n;
    int a[21];
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=20;i++)
    a[i]=a[i-1]+a[i-2];
    my_scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++)
   { my_scanf("%d",&b[n]);
    my_printf("%d\n",a[b[n]]);}
    getchar();
    getchar();
}
