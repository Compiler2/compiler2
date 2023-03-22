#include <header.h>


int isprime(int n)
{
    int i;
    if (n % 2 == 0)
        return 0;
    for (i = 3; (i * i) <= n; i+=2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int ishuiwen(int n)
{
    int h = 0, m = n;
    while (m > 0)
    {
        h = h * 10 + m % 10;
        m /= 10;
    }
    return (h == n);
}

int main_bench()
{
    int count = 0, i, m, n;
    my_scanf("%d%d", &m, &n);
    for (i=m; i<=n; i++)
    {
        if (isprime(i) && ishuiwen(i))
        {
            count++;
            if (count == 1)
                my_printf("%d", i);
            else
                my_printf(",%d",i);
        }
    }
    if (count == 0)
        my_printf("no");
    return 0;
}


