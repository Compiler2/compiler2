#define NUM_ITER 26625

#include <header.h>

int main_bench()
{
    int a[20000],b[20000];
    int N;
    my_scanf("%d",&N);
    int i,k;
    for(i=2;i<=N;i++)
    {
        b[i-2]=i;
        int m;
        m = (int)(i/2);
        for(k=2;k<=m;k++)
        {
            if(i%k==0)
            break;
        }
        if(k==m+1)
        {
            a[i-2]=1;
        }
        else
        {
            a[i-2]=0;
        }
    }
    for(i=2;i<=N;i++)
    {
        if((a[i-2]==a[i])&&(a[i-2]==1))
        {
            my_printf("%d %d\n",b[i-2],b[i]);
        }
    }
    if(N<=4)
    {
        my_printf("empty");
    }
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}