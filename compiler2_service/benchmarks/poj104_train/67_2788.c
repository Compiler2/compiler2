#define NUM_ITER 26187

#include <header.h>

int main_bench(){
    int n,i,j,k;
    int zong[100],you[100];
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&zong[i],&you[i]);
        if(i>=1){
            if(you[i]*1.0/zong[i]-you[0]*1.0/zong[0]>0.05){
                my_printf("better\n");
            }else if(you[0]*1.0/zong[0]-you[i]*1.0/zong[i]>0.05){
                my_printf("worse\n");
            }else {
                my_printf("same\n");
            }
        }
    }
    
    return 0;
}