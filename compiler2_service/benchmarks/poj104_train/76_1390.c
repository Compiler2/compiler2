#define NUM_ITER 16346

#include <header.h>

int main_bench(){
    int n,i,t,x,d,m,y=0,s=1;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        my_scanf("%d %d\n",&a[i],&b[i]);
    }
    t=a[0];
    for(i=0;i<n;i++){
        if(t>a[i]){
            t=a[i];
        }
    }
    x=t;
    t=b[0];
    for(i=0;i<n;i++){
        if(t<b[i]){
            t=b[i];
        }
    }
    d=t;
    t=d-x;
    double e[t];
    for(m=0;m<t;m++){
        for(i=0;i<n;i++){
            e[m]=m+x+0.5;
            if(e[m]>a[i]&&e[m]<b[i]){
                y=1;
                break;
            }
        }
        s*=y;
        y=0;
    }
    if(s==0){
        my_printf("no");
    }else{
        my_printf("%d %d",x,d);
    }
}

