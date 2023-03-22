#define NUM_ITER 25713

#include <header.h>

int main_bench(){
    int i,j,m,n,a,b,c,d;
    double x,y;
    int num[10000],ok[10000];
    my_scanf("%d",&n);
    my_scanf("%d %d",&a,&b);
    x=1.0*b/a;
    for(i=1;i<n;i++){
                     y=0;
                     my_scanf("%d %d",&c,&d);
                     y=1.0*d/c;
                     if((y-x)>0.05){
                                my_printf("better\n");
                                }
                     else if((x-y)>0.05){
                                my_printf("worse\n");
                                }
                     else{
                          my_printf("same\n");
                          }
                     
                     }
     return 0;
}
