#define NUM_ITER 1395027

#include <header.h>

int main_bench()
{
    int len;
    char str[200],*p;
    
    
    gets(str);
    len = strlen(str);
    for (p = str; *(p+1); p++)
        my_printf("%c", *p + *(p+1));
    my_printf("%c\n", *p + *str);
    return 0;
}
