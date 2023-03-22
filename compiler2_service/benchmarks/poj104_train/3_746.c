#include <header.h>

int main_bench(){
    int a[1000];
    int i, j, n, k;
    my_scanf("%d%d", &n, &k);
    for (i=0; i<n; i++) {
        my_scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++) {
        for (j=i; j<n; j++) {
            if (a[i]+a[j] == k) {
                my_printf("yes");
                return 0;
            }
        }
    }
    my_printf("no");
    return 0;
}
