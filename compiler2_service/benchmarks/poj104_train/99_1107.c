#define NUM_ITER 56018

#include <header.h>

int main_bench(){
    int n,i,x;
    double a,b,c,d,e;
    a=0,b=0,c=0,d=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&x);
        if(x<=18){
            a=a+1;
        }else if(x>18&&x<36){
            b=b+1;
        }else if(x>35&&x<61){
            c=c+1;
        }else if(x>60){
            d=d+1;
        }
    }
    e=a+b+c+d;
    my_printf("1-18: %.2lf",a/e*100);my_printf("%%\n");
    my_printf("19-35: %.2lf",b/e*100);my_printf("%%\n");
    my_printf("36-60: %.2lf",c/e*100);my_printf("%%\n");
  my_printf("Over60: %.2lf",d/e*100);my_printf("%%\n");
   
return 0;
}
