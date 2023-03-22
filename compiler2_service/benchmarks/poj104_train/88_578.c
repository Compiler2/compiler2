#include <header.h>


int main_bench()
{
    char c[50];
    char *p;
    gets(c);
    for (p = c; p < c + strlen(c); p++) {
        if (*p >= '0' && *p <= '9') {
            my_printf("%c", *p);
            if (p < c + strlen(c) - 1 && *(p+1) >= '0' && *(p+1) <= '9' ) {
                continue;
            }
            my_printf("\n");
        }
    }
    return 0;
}