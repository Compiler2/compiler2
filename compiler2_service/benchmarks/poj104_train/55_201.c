#include <header.h>


int main_bench()
{
    char s[33];
    int i, a, b, n;
    long x = 0, y = 1;
    my_scanf("%d %s %d", &a, s, &b);
    for (i = strlen(s)-1; i >= 0; i--)
    {
        if (s[i] >= 'a')
           x += (s[i] - 'a' + 10) * y;
        else if (s[i] >= 'A')
           x += (s[i] - 'A' + 10) * y;
        else 
           x += (s[i] - '0') * y;
        y *= a;
    }
    y = 1;
    while (x / y >= b)
       y *= b;
    do
    {   
        n = x / y;
        x = x % y;
        if (n >= 10)
            my_printf("%c", 'A' + (n - 10));
        else
            my_printf("%d", n);
        y = y / b;
    }
    while (y >= 1);
    return 0;
}