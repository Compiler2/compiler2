#define NUM_ITER 109237

#include <header.h>

int main_bench()
{
    int n,sz[100],sum=0;
    my_scanf("%d",&n);
    for(int i=0;i<=n;i++){
    if(i%10!=7&&i%7!=0&&(i<70||i>79))
    sum=sum+i*i;
    }
    my_printf("%d",sum);
    return 0;
}