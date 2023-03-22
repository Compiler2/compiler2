#define NUM_ITER 44986

#include <header.h>

int main_bench(){
    int sz[100];
    int n,i,a,b,c,d;
    a=0;
    b=0;
    c=0;
    d=0;
    double A,B,C,D;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    for(i=0;i<n;i++){
        if(sz[i]<=18&&sz[i]>=1){
            a++;
        }
    }
    for(i=0;i<n;i++){
        if(sz[i]>=19&&sz[i]<=35){
            b++;
        }
    }
    for(i=0;i<n;i++){
        if(sz[i]>=36&&sz[i]<=60){
            c++;
        }
    }
    for(i=0;i<n;i++){
        if(sz[i]>60){
            d++;
        }
    }
    A=100.0*a/n;
    B=100.0*b/n;
    C=100.0*c/n;
    D=100.0*d/n;
    my_printf("1-18: %.2lf%%\n",A);
    my_printf("19-35: %.2lf%%\n",B);
    my_printf("36-60: %.2lf%%\n",C);
    my_printf("Over60: %.2lf%%\n",D);
    return 0;
}