#include <header.h>

int main_bench()
{
    int n,i;
    double a=1.0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
       a=a*2;
    }
    my_printf("%.0lf",a);
    my_scanf("%d",&n);
    return 0;
}
