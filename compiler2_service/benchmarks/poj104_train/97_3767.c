#define NUM_ITER 1066752

#include <header.h>

int main_bench(){
    int i,a,sz[6],rmb[6];
    my_scanf("%d",&a);
    rmb[0]=100;rmb[1]=50;rmb[2]=20;rmb[3]=10;rmb[4]=5;rmb[50]=1;
    for(i=0;i<5;i++){
        sz[i]=a/rmb[i];
        a=a-sz[i]*rmb[i];
    }
     for(i=0;i<5;i++){my_printf("%d\n",sz[i]);}my_printf("%d\n",a);
}