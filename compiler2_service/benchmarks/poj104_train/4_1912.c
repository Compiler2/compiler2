#define NUM_ITER 571

#include <header.h>


int main_bench()
{
    int i, j, k;
    int row, col;
    int matrix[100*100];
    my_scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            my_scanf("%d", matrix + i*100 + j);
        }
    }
    for (i = 0; i < col; i++) {
        for (j = i, k = 0; j >= 0 && k < row; j--, k++) {
            my_printf("%d\n", *(matrix + k*100 + j));
        }
    }
    for (i = 1; i < row; i++) {
        for (j = col - 1, k = i; j >= 0 && k < row; j--, k++) {
            my_printf("%d\n", *(matrix + k*100 + j));
        }
    }
    return 0;
}