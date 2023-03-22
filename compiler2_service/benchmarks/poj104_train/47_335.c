#define NUM_ITER 46111

#include <header.h>










int main_bench(){
    int n;
    int* num;
    int i,j;
    my_scanf("%d", &n);
    num = (int*)malloc(sizeof(int)*n);
    j = n; i = 0;
    while (j--) {
        my_scanf("%d", &num[i]);
        i++;
    }
    for (i = 0; i <= (n-1)/2; i++) {
        j = num[i];
        num[i] = num[n-1-i];
        num[n-1-i] = j;
    }
    for (i = 0; i < n; i++) {
        if(i!=0)
            my_printf(" ");
        my_printf("%d", num[i]);
    }
    my_printf("\n");
    return 0;
}