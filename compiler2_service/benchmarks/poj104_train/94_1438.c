#define NUM_ITER 17555

#include <header.h>


int main_bench()
{
    int n;
    my_scanf("%d", &n);
    int qtt[n], a;
    for (a=0; a<n; a++) {
        my_scanf("%d", &qtt[a]);
    }
    int s=0, b;
    for (b=0; b<n; b++) {
        if (qtt[b]%2==1) {
            s++;
        }
    }
    int odd[s], c, d=0;
    for (c=0; c<n; c++) {
        if (qtt[c]%2==1) {
            odd[d]=qtt[c];
            d++;
        }
    }
    int j, r;
    for (j=s-1; j>0; j--) {
        for (r=0; r<j; r++) {
            if (odd[r]>odd[r+1]) {
                int tmp;
                tmp=odd[r+1];
                odd[r+1]=odd[r];
                odd[r]=tmp;
            }
        }
    }
    int e;
    for (e=0; e<s-1; e++) {
        my_printf("%d,", odd[e]);
    }
    my_printf("%d", odd[s-1]);
    return 0;
}