#define NUM_ITER 1399686

#include <header.h>



const int N = 110 ;

int q[N] ;
char str[N], a ;

int main_bench()
{
    my_scanf ("%s", str) ;
    for (int i = 0, t = 0; i < strlen (str); i ++ )
        if (str[i] == str[0])
            q[ ++ t] = i ;
        else my_printf ("%d %d\n", q[t -- ], i) ;
    return 0 ;
}