#define NUM_ITER 34793

#include <header.h>

int main_bench() {
    int n;
    my_scanf("%d",&n);
    int sz[n][2];
    int i;
    for(i=0;i<n;i++) {
        my_scanf("%d %d",&(sz[i][0]),&(sz[i][1]));
    }
    int A=0,B=0,k;
    for(i=0;i<n;i++) {
        k=sz[i][0]-sz[i][1];
        if(k==-1||k==2) {
            A++;
        }
        if(k==1||k==-2) {
            B++;
        }
    }
    if(A>B) {
        my_printf("A");
    }
    if(A<B) {
        my_printf("B");
    }
    if(A==B) {
        my_printf("Tie");
    }
    return 0;
}