#define NUM_ITER 34512

#include <header.h>

int main_bench(){
    int n,i;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a[i],&b[i]);
    }
    int j=0;
    for(i=0;i<n;i++){
        if(a[i]==b[i]){
            j=j;
        }else if(b[i]-a[i]==1||a[i]-b[i]==2){
            j++;
        }else if(a[i]-b[i]==1||b[i]-a[i]==2){
            j--;
        }
    }
    if(j>0){
        my_printf("A");
    }else if(j==0){
        my_printf("Tie");
    }else if(j<0){
        my_printf("B");
    }
    return 0;
}
