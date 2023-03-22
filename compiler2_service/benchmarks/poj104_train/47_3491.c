#define NUM_ITER 28151

#include <header.h>

int read();
void updown();
void print();
int a[100],b[100],n;
int main_bench()
{
    read();
    updown();
    print();
    return 0;
}
int read()
{
    int i;
    my_scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    return 0;
}
void updown()
{
    int i;
    for (i=1;i<=n;i++)
    {
        b[i]=a[n-i+1];
    }
    return;
}
void print()
{
    int i;
    for (i=1;i<n;i++)
    {
        my_printf("%d ",b[i]);
    }
    my_printf("%d",b[n]);
    return;
}

