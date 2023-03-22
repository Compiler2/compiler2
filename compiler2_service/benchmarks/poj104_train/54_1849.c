#include <header.h>


int p(int n,int k){
    if (!k) {
        return 1;
    }
    return n * p(n,k - 1);
}

int main_bench(){
    int n;
    int k;
    my_scanf("%d %d", &n, &k);
    my_printf("%d", p(n, n) - k * (n - 1));
    return 0;
}