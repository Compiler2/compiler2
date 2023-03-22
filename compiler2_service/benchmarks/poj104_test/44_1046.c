#include <header.h>

int reverse(int num)
{
    int k;
    k=0;
    while (num!=0)
    {
          k=k*10+num%10;
          num=num/10;
    }
    return k;
}

int main_bench()
{
    int n,b,i;
    for (i=1;i<=6;i++)
    {
    my_scanf("%d",&n);
    if (n<0)
    {
          b=0-reverse(0-n);
          my_printf("%d\n",b);
    }
    else if (n==0)
    my_printf("0\n");
    else my_printf("%d\n",reverse(n));
    }
    getchar();
    getchar();
}  
