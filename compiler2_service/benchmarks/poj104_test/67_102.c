#include <header.h>

int main_bench(){
    int n,bl[10000],yx[10000],i;
    double xl[10000],cha[10000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&bl[i],&yx[i]);
    }
    for(i=0;i<n;i++){
        xl[i]=(1.0*yx[i])/bl[i];
    }
    for(i=1;i<n;i++){
        cha[i]=xl[i]-xl[0];
    }
    for(i=1;i<n;i++){
        if(cha[i]>0.05){
            my_printf("better\n");
        }
        else if(cha[i]<-0.05){
            my_printf("worse\n");
        }
        else my_printf("same\n");
    }
    return 0;
}