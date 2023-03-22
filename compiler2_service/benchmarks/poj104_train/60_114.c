#define NUM_ITER 13475

#include <header.h>



int sushu(int i)
{
    int j,k;
    k=1;
    for(j=2;j<i;j++)
    {
                    if (i%j==0) 
                    {
                          k=0;
                          break;
                    }
    }
    return k;
}

int main_bench()
{
    int n,i,out;
    my_scanf("%d",&n);
    out=0;
    for (i=4;i<=n;i++)
    {
        if (sushu(i)&&sushu(i-2)) {my_printf("%d %d\n",i-2,i); out=1;}
    }
    if (out==0)
    {
               my_printf("empty");
    }
    return 0;
}
