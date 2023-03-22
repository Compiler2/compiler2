#include <header.h>

int main_bench(){
    int n,a,b;
    my_scanf("%d",&n);
    int aa[n],bb[n];
    a=0;
    for(int i=0;i<n;i++){
        my_scanf("%d%d",&aa[i],&bb[i]);
    }
    for(int i=0;i<n;i++){
        if(aa[i]==0&&bb[i]==1){
            a++;
        }
        if(aa[i]==1&&bb[i]==2){
            a++;
        }
        if(aa[i]==2&&bb[i]==0){
            a++;
        }
        if(aa[i]==1&&bb[i]==0){
            a--;
        }
        if(aa[i]==2&&bb[i]==1){
            a--;
        }
        if(aa[i]==0&&bb[i]==2){
            a--;
        }
    }
    if(a==0){
        my_printf("Tie");
    }
    if(a>0){
        my_printf("A");
    }
    if(a<0){
        my_printf("B");
    }
    return 0;
}
