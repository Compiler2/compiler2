#define NUM_ITER 18797

#include <header.h>

int zhishu(int n)
{
    int i,m;
    for(i=2;i<n;i++)
    {
       if (n%i==0)
        {m=0;
        break;}
    }
    if (i==n)
     m=1;
     return m;
}
int main_bench()
{
    int n,a,b;
    my_scanf("%d",&n);
    for(int i=3;i<=n/2;i++)
    {
            a=zhishu(i);
            b=zhishu(n-i);
            if (a==1&&b==1)
             my_printf("%d %d\n",i,n-i);
    }
    getchar();
    getchar();
    getchar();
    getchar();
}