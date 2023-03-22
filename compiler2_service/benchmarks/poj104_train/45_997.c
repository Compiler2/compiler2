#define NUM_ITER 1030102

#include <header.h>


int main_bench()
{
    char s[200], w[200];
    int i, j, lens, lenw;

    my_scanf("%s%s", w, s);
    lens = strlen(s);
    lenw = strlen(w);
    for (i=0; i<lens; i++) {
        for (j=0; j<lenw; j++)
            if (s[i+j] != w[j]) 
                break;
        if (j == lenw) {
            my_printf("%d", i);
            return 0;
        }
    }

    return 0;
}