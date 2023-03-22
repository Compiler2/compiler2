#define NUM_ITER 2462

#include <header.h>

int main_bench() {
	int i,j,k,m,n;
    for(j=1;j<101;j++){
        my_scanf(" %d %d", &n, &m);
        k=0;
        for(i=2;i<=n;i++){
            k=((m%i)+k)%i; 
        }
        k++;
        if(n!=0){my_printf("%d\n", k);}
    }
    return 0;
}