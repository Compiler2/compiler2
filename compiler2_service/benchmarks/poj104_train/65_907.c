#define NUM_ITER 33412

#include <header.h>

int main_bench(){
    int n,i,m=0,o=0;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        my_scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]-b[i]==1){
            o++;
        }else if(a[i]-b[i]==-1){
            m++;
        }else if(a[i]==0&&b[i]==2){
            o++;
        }else if(a[i]==2&&b[i]==0){
            m++;
        }
    }
    if(m>o){
        my_printf("A");
    }else if(m<o){
        my_printf("B");
    }else{
        my_printf("Tie");
    }
    return 0;
}
