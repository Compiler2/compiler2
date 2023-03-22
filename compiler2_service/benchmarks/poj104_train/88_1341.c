#define NUM_ITER 982686

#include <header.h>




int isDigit(char ch) {
    if (ch == '\0') return -1;
    if ('0' <= ch && ch <= '9') return 1;
    return 0;
}

int main_bench() {
    char *p = (char *) malloc(40 * sizeof(char));
    gets(p);
    do {
        p--;
        while (isDigit(*(++p)) == 0) {} 
        p--;
        while (isDigit(*(++p)) == 1)
            my_printf("%c", *p);
        my_printf("\n");
    } while (*p != '\0');
    return 0;
}
