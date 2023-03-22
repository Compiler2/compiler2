#define NUM_ITER 967288

#include <header.h>


int pos;

void match(char lch)
{
    int spos = pos;
    char ch;
    pos++;
    my_scanf("%c", &ch);
    while (ch == lch)
    {
        match(ch);
        pos++;
        my_scanf("%c", &ch);
    }
    my_printf("%d %d\n", spos, pos);
}

int main_bench()
{
    char ch;
    pos = 0;
    my_scanf("%c", &ch);
    match(ch);
    return 0;
}