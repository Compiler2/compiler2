#define NUM_ITER 1243669

#include <header.h>

int main_bench(){
    int i=1;
    double n,x;
    double a,b,c,d,e,f,g,h;
    my_scanf("%lf",&n);
    a=0;
    b=0;
    c=0;
    d=0;
    while(i<=n){
        my_scanf("%lf",&x);
        if(x<=18){
        a++;i++;}
        else if(x>=19&&x<=35){
            b++;i++;
        }else if(x>=36&&x<=60){
            c++;i++;
        }else if(x>60){
            d++;i++;
        }
    }
     e=100*a/n;
     f=100*b/n;
     g=100*c/n;
     h=100*d/n;
     my_printf("1-18: %.2lf%%\n",e);
     my_printf("19-35: %.2lf%%\n",f);
     my_printf("36-60: %.2lf%%\n",g);
     my_printf("Over60: %.2lf%%\n",h);
     return 0;
}

