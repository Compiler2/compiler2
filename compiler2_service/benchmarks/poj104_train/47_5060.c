#include <header.h>

int main_bench()
{
    int n,i,a[100],b[100];
    my_scanf("%d",&n);
    int *p,*q;
    p=a;
    q=b;
    for(i=0;i<n;i++)
        my_scanf("%d",(p+i));
    for(i=0;i<n;i++)
    {
        *(q+i)=*(p+(n-1-i));
        my_printf("%d%s",*(q+i),i==n-1?"":" ");
    }
}