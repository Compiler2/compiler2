#define NUM_ITER 1049325

#include <header.h>

int main_bench(){
    int x,a,b,c,d,e,f,g,h,i,j,k;
    my_scanf("%d",&x);
    a=x/100;
    b=x%100;
    c=b/50;
    d=b%50;
    e=d/20;
    f=d%20;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=j;
    my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,c,e,g,i,k);
    my_scanf("%d",&a);
    return 0;
}
