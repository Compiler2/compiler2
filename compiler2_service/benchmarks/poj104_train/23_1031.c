#define NUM_ITER 1825332

#include <header.h>


int main_bench()
{
    int i;
    int count = 0;
    char buf[101];
    char dict[101][101];
    while (my_scanf("%s", buf)) {
        strcpy(dict[count++], buf);
        if (getchar() != ' ') {
            break;
        }
    }
    for (i = count - 1; i >= 0; i--) {
        if (i != count - 1) {
            my_printf(" ");
        }
        my_printf("%s", dict[i]);
    }
    return 0;
}