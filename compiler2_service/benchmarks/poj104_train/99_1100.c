#define NUM_ITER 57214

#include <header.h>

int main_bench(){
    int n,a,i;
    double b=0,c=0,d=0,e=0;
    double h,p,j,k;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
        my_scanf("%d",&a);
        if(a<=18){
            b+=1;
        }else if(19<=a&&a<=35){
            c+=1;
        }else if(36<=a&&a<=60){
            d+=1;
        }else {
            e+=1;
        }
    } 
    h=100.0*b/n;
    p=100.0*c/n;
    j=100.0*d/n;
    k=100.0*e/n;
    my_printf("1-18: %.2lf%%\n",h);
    my_printf("19-35: %.2lf%%\n",p);
    my_printf("36-60: %.2lf%%\n",j);
    my_printf("Over60: %.2lf%%\n",k);
    return 0;
}


