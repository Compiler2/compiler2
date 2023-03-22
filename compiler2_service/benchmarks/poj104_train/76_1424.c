#define NUM_ITER 3109

#include <header.h>

int main_bench(){
    int n,i,t,a[50000],b[50000],max,min,p[50000],s=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&a[i],&b[i]);
    }min=a[0];max=b[0];
    for(i=0;i<n;i++){
        if(b[i]>max){
            max=b[i];
        }if(a[i]<min){
            min=a[i];
        }
    }
    for(i=min;i<max;i++){
        p[i]=1;
    }for(i=min;i<max;i++){
        for(t=0;t<n;t++){
           if((i+0.5)>a[t]&&(i+0.5)<b[t]){
           p[i]=0;
           } 
        }
    }
    for(i=min;i<max;i++){
        s+=p[i];
    }
    if(s==0){my_printf("%d %d",min,max);}
    else{my_printf("no");}
    return 0;
}
