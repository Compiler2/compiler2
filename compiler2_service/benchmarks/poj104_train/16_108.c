#include <header.h>


int main_bench()
{
    int n,a,i;
    my_scanf("%d",&n);
    for (i=1;i<=5;i++)
    {
        a=n%10;
        my_printf("%d",a);
        n=(n-a)/10;
        if (n==0)
        break;
    }
}