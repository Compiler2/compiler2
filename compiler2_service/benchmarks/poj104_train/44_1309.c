#include <header.h>

int reverse(int num)
{
    int m=0,i,j,k,n,p,x=0;
    if (num<0) {num=-num;x=1;}
    n=num;
    for (j=0;n>=1;j++)
    n=n/10;
    for (i=0;i<j;i++)
    {
        n=1;
        p=num%10;
        num=(num-p)/10;
        m=10*m+p;
    }
    return (x==1)?-m:m;
}
int main_bench()
{
    int i,n,j;
    for (i=0;i<6;i++)
    {
        my_scanf("%d",&n);
        my_printf("%d\n",reverse(n));
    }
}

