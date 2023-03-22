#include <header.h>


int main_bench()
{
    int i;
    int n;
    int buf;
    int *array;
    my_scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        my_scanf("%d", array + i);
    }
    for (i = n - 1; i >= 0; i--) {
        if (i != n - 1) {
            my_printf(" ");
        }
        my_printf("%d", *(array + i));
    }
    return 0;
}