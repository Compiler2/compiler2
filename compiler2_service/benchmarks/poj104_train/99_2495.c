#define NUM_ITER 1188864

#include <header.h>

int main_bench() 
{
    double a,b,c,d,x,y,n;
    my_scanf("%lf",&x);
    y=1;
    a=0,b=0,c=0,d=0;
    while(x>=y){
    my_scanf("%lf",&n);
    if (n<=18){
    a=a+1;
    }
    else if (n>18&&n<=35){
    b=b+1;
    }
    else if (n>35&&n<=60){
    c=c+1;
    }
    else{
    d=d+1;
    }
    y=y+1;
    }
    a=1.0*a/x*100.0;
    b=1.0*b/x*100.0;
    c=1.0*c/x*100.0;
    d=1.0*d/x*100.0;
    my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",a,b,c,d);
    return 0;
}
