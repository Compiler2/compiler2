#include <header.h>

int main_bench(){
    int n,i,l;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        l=n-i-1;
        b[i]=a[l];
        my_printf("%d ",b[i]);
    }
    b[n-1]=a[0];
    my_printf("%d",b[n-1]);
    return 0;
}


