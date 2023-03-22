#define NUM_ITER 1746147

#include <header.h>

int main_bench()
{
    int a, b, c, d, e, n;
    my_scanf("%d",&n);
    a=(int)(n/10000);
    b=(int)(n/1000-a*10);
    c=(int)(n/100-a*100-b*10);
    d=(int)(n/10-a*1000-b*100-c*10);
    e=(int)(n-a*10000-b*1000-c*100-d*10);
    if(a!=0)
        my_printf("%d%d%d%d%d\n",e,d,c,b,a);
    if(a==0&&b!=0)
        my_printf("%d%d%d%d\n",e,d,c,b);
    if(a==0&&b==0&&c!=0)
        my_printf("%d%d%d\n",e,d,c);
    if(a==0&&b==0&&c==0&&d!=0)
        my_printf("%d%d\n",e,d);
    if(a==0&&b==0&&c==0&&d==0)
        my_printf("%d\n",e);
    return 0;
}