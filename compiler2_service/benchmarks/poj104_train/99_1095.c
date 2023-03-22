#define NUM_ITER 1209725

#include <header.h>

int main_bench()
{
    double n,a,b,c,d,x,m,h,p,q;
    a=0;
    b=0;
    c=0;
    d=0;
    int i=1;
    my_scanf("%lf",&n);
    while(i<=n){
        my_scanf("%lf",&x);
        if(x<=18){
            a++;
        }
        else if(x>=19&&x<=35){
            b++;
        }
        else if(x>=36&&x<=60){
            c++;
        }
        else if(x>60){
            d++;
        }
        i++;
    }
    m=100*a/n;
    h=100*b/n;
    p=100*c/n;
    q=100*d/n;
   my_printf("1-18: %.2lf",m);
   my_printf("%%\n");
   my_printf("19-35: %.2lf",h);
   my_printf("%%\n");
   my_printf("36-60: %.2lf",p);
   my_printf("%%\n");
   my_printf("60??: %.2lf",q);
   my_printf("%%");
    return 0;
    
}