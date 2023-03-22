#include <header.h>


int N,M;
int data[10010];

int main_bench(){
    int i,t,j;
    my_scanf("%d",&N);
    M = 0;
    for (i = 1;i <= N ; i++){
        my_scanf("%d",&t);
        if (t%2) data[M++] = t;
    }
    for (i = M-1 ; i >= 0; i--){
        for (j = 0;j < i ; j++){
            if (data[j] > data[j+1]){
                data[j] = data[j+1] + data[j];
                data[j+1] = data[j] - data[j+1];
                data[j] = data[j]- data[j+1];
            }
        }
    }

    for (i = 0;i <= M-2; i++){
        my_printf("%d,",data[i]);
    }
    my_printf("%d\n",data[i]);

    return 0;
}
