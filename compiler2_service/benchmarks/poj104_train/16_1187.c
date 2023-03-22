#define NUM_ITER 1515482

#include <header.h>


int main_bench()
{
    char s[10];
    my_scanf("%s", &s);
    int n = 0, i = 0;
    for ( i = 0; s[i]!='\0'; i++ )
        n++;
    for ( i = n-1; i >= 0; i-- )
        my_printf("%c", s[i]);
    return 0;
}
