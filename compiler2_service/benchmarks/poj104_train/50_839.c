#define NUM_ITER 875936

#include <header.h>

int main_bench()
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int b[13];
    int d,i,j;
    my_scanf("%d",&d);
    d=d-1;
    b[0]=13;
    for(i=1;i<=12;i++)
    {
        b[i]=b[i-1]+a[i-1];
        if ((b[i]+d)%7==5)
            my_printf("%d\n",i);
    }
    return 0;
}