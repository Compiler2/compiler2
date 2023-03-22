#include <header.h>


int main_bench()
{
    int n;
    int i;
    int buf;
    int appeared[110] = {0};
    my_scanf("%d", &n);
    for (i = 0; i < n; i++) {
        my_scanf("%d", &buf);
        if (!appeared[buf]) {
            if (i != 0) {
                my_printf(" ");
            }
            my_printf("%d", buf);
            appeared[buf] = 1;
        }
    }
    return 0;
}