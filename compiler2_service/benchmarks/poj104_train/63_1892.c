#include <header.h>

 
int main_bench() {
    int x1,y1,x2,y2;
    int **a, **b, **c;
    int i,j,k;
    my_scanf("%d %d", &x1, &y1);
    a = (int**)malloc(sizeof(int*)*x1);
    for(i=0;i<x1;++i) {
        a[i] = (int*)malloc(sizeof(int)*y1);
        for(j=0;j<y1;++j) {
            my_scanf("%d", &a[i][j]);
        }
    }
    my_scanf("%d %d", &x2, &y2);
    if(y1 != x2) {
        my_printf("Wrong parameter.");
        for(i=0;i<x1;++i) {
            free(a[i]);
        }
        free(a);
        return 0;
    }
    b = (int**)malloc(sizeof(int*)*x2);
    for(i=0;i<x2;++i) {
        b[i] = (int*)malloc(sizeof(int)*y2);
        for(j=0;j<y2;++j) {
            my_scanf("%d", &b[i][j]);
        }
    }
     
    c = (int**)malloc(sizeof(int*)*x1);
    for(i=0;i<x1;++i) {
        c[i] = (int*)malloc(sizeof(int)*y2);
        for(j=0;j<y2;++j) {
            c[i][j] = 0;
            for(k=0;k<y1;++k) {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
     
    for(i=0;i<x1;++i) {
        for(j=0;j<y2-1;++j) {
            my_printf("%d ", c[i][j]);    
        }
        my_printf("%d\n",c[i][j]);
    }
     
    
    for(i=0;i<x1;++i) {
        free(a[i]);
        free(c[i]);
    }
    free(a);
    free(c);
     
    for(i=0;i<x2;++i) {
        free(b[i]);
    }
    free(b);
     
    return 0;
}