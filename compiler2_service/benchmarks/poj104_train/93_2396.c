#include <header.h>


int main_bench(){

    int a;

    my_scanf ("%d", &a);

    if ( a % (3*5*7) == 0 ){
         my_printf ("3 5 7\n");
         return 0;
    }

    if ( a % ( 3*5) == 0) {
        my_printf ("3 5\n");
        return 0;
    }

    if ( a % ( 3*7) == 0) {
        my_printf ("3 7\n");
        return 0;
    }
    if ( a % ( 5*7) == 0) {
        my_printf ("5 7\n");
        return 0;
    }
    if ( a % ( 3) == 0) {
        my_printf ("3\n");
        return 0;
    }
    if ( a % ( 5) == 0) {
        my_printf ("5\n");
        return 0;
    }
    if ( a % ( 7) == 0) {
        my_printf ("7\n");
        return 0;
    }

    my_printf ("n\n");

    return 0;
}