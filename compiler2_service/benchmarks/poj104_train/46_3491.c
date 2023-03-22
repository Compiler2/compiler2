#define NUM_ITER 588

#include <header.h>

int main_bench(){
    int row,col,k,i,j;
    int sz[100][100];
    my_scanf("%d %d",&row,&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            my_scanf("%d",&sz[i][j]);
        }
    }
    for(k=0; row-k>k && col-k>k; k++) {
        for (i=k,j=k; j<col-k-1; j++) {
            my_printf("%d\n", sz[i][j]);
        }
        for (; i<row-k-1; i++) {
            my_printf("%d\n", sz[i][j]);
        }
        if (i==k || j==k) {
            my_printf("%d\n", sz[i][j]);
            break;
        }
        for (; j>k; j--) {
            my_printf("%d\n", sz[i][j]);
        }
        for (; i>k; i--) {
            my_printf("%d\n", sz[i][j]);
        }
    }
    return 0;
}



