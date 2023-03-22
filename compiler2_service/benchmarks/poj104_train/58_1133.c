#define NUM_ITER 31459

#include <header.h>


int isLegal(char *str)
{
    if (!isalpha(*str) && *str != '_') return 0;
    for (str++;*str;str++)
        if (!isalpha(*str) && !isdigit(*str) && *str != '_') return 0;
    return 1;
}
int main_bench()
{
    char str[100];
    int n;
    my_scanf("%d", &n);
    gets(str);
    while (n--)
    {
          gets(str);
          my_printf("%d\n", isLegal(str));
    }
    return 0;
}
