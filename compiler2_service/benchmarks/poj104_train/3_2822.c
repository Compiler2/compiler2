#define NUM_ITER 51225

#include <header.h>

int main_bench(){
    int a[1000];
    int n,k;
    my_scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        my_scanf("%d",&a[i]);
        
    }for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==k){my_printf("yes");
            return 0;}
        }
    }my_printf("no");
    return 0;
   
}
