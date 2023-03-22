#define NUM_ITER 3909

#include <header.h>

int main_bench() {
    int n,i,m,max,min,p,s=0 ;
    double x;
    my_scanf("%d",&n);
    int zdd[n],ydd[n] ;
    for(i=0;i<n;i++) {my_scanf("%d %d",&zdd[i],&ydd[i]);}
    min=zdd[0] ;max=ydd[0] ;
        for(i=0;i<n;i++) {
            if(zdd[i]<min) {
                min=zdd[i];
            }
            if(max<ydd[i]) {
                max=ydd[i];
        }
    } 
    int y[max] ;
    for(i=min;i<max;i++) {
        y[i]=1 ;
    }
    for(x=min+0.5;x<=max;x++) {
        p=0 ;
        for(i=0;i<n;i++) {
        if((x>=zdd[i])&&(x<=ydd[i])){
            p++ ;
        } }
        if(p>0) {s++;}
    }
    if(s==max-min) {my_printf("%d %d",min,max); }
    else {my_printf("no");}
    return 0;
}

