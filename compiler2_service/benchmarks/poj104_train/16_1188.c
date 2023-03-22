#include <header.h>


int main_bench()
{
    char s[6] = {0,0,0,0,0,0};
    my_scanf("%s", &s);
    int i = 0;
    for ( i = 5; i >= 1 && s[i] == 0; i-- );
    for ( ; i >= 0; i-- )
        my_printf("%c", s[i]);
    return 0;
}
