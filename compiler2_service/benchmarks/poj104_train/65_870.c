#define NUM_ITER 33450

#include <header.h>

int main_bench(){
    int n, a[202], b[202], i, j=0, k=0;
    my_scanf("%d", &n);
    for(i=0;i<n;i++){
        my_scanf("%d %d", &a[i], &b[i]);
        if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){j++;}
        if(a[i]==b[i]){j++;k++;}
        if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)){k++;}
        }
    if(j>k){my_printf("A");}else{
    if(j<k){my_printf("B");}else{
    my_printf("Tie");}}
    return 0;
}