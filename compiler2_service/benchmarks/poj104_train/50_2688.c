#include <header.h>

int main_bench()
{
    int a[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    int i,j,w;
    my_scanf("%d",&w);
    for(i=0;i<=11;i++)
    {
        if((a[i]+13-1+w)%7==5)
        my_printf("%d\n",i+1);
    }
    return 0;
}
