#define NUM_ITER 112875

#include <header.h>

int main_bench()
{
    int n,i,sum=0;
    my_scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(i%7!=0&&(i-7)%10!=0&&((i-70)>9||(i-70)<0==1)==1)
        sum+=i*i;
        }
        my_printf("%d",sum);
        return 0;
        }