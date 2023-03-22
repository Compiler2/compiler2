#define NUM_ITER 457012

#include <header.h>


int main_bench()
{
    int count[300] = {0};
    int c = 0, d = 1;
    while ( (c = getchar()) != '\n' && c != '\0' )
    {
        if ( c == ' ' )
        {
            d = -1;
            continue;
        }
        count[c] += d;
    }
    int i = 0;
    for ( i = 0; i < 300 && count[i] == 0; i++ )
        ;
    if ( i == 300 )
        my_printf("YES");
    else
        my_printf("NO");
    return 0;
}