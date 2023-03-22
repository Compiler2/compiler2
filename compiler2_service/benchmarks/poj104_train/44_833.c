#define NUM_ITER 417927

#include <header.h>

int fx(int n)
{
    int t=0;
    do
    {
        t=t*10+n%10;
        n/=10;
    }
    while(n!=0);
    return t;
}
int ab(int n)
{
    if(n<0)
    return -ab(-n);
    return fx(n);
}
int main_bench()
{
    int i,t;
    my_scanf("%d",&t);
    my_printf("%d",ab(t));
    for(i=1;i<=5;i++)
    {
                     my_scanf("%d",&t);
    my_printf("\n%d",ab(t));
    }
   
    return 0;
}
