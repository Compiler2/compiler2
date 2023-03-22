#define NUM_ITER 56315

#include <header.h>

int main_bench(){
    int n,i;
    int a[10000];
    int k=0,l=0,m=0,q=0;
    double s;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<=18){
            k+=1;
        }
        if(a[i]>=19&&a[i]<=35){
            l+=1;
        }
        if(a[i]>=36&&a[i]<=60){
            m+=1;
        }
        if(a[i]>60){
            q+=1;
        }
    }
    my_printf("1-18: %.2lf%%\n",(double)100*k/n);
    my_printf("19-35: %.2lf%%\n",(double)100*l/n);
    my_printf("36-60: %.2lf%%\n",(double)100*m/n);
    my_printf("Over60: %.2lf%%\n",(double)100*q/n);
    return 0;
}
