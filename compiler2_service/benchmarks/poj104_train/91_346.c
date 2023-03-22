#define NUM_ITER 1299050

#include <header.h>


int main_bench()
{
    char str[101];
    char friend[101];
    char *p = str;
    char *q = friend;
    gets(str);
    while (p < str + strlen(str) - 1) {
        *q++ = *p + *(p + 1);
        p++;
    }
    *q = *p + *str;
    *(friend + strlen(str)) = 0;
    puts(friend);
    return 0;
}