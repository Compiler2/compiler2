#include <header.h>

int main_bench(){
    int n, a[7]={0}, b[6]={0};
    my_scanf("%d", &n);
    a[1]=n/100;
    b[1]=n%100;
    my_printf("%d\n", a[1]);
    a[2]=b[1]/50;
    b[2]=b[1]%50;
    my_printf("%d\n", a[2]);
    a[3]=b[2]/20;
    b[3]=b[2]%20;
    my_printf("%d\n", a[3]);
    a[4]=b[3]/10;
    b[4]=b[3]%10;
    my_printf("%d\n", a[4]);
    a[5]=b[4]/5;
    b[5]=b[4]%5;
    my_printf("%d\n", a[5]);
    a[6]=b[5]/1;
    my_printf("%d\n", a[6]);
    return 0;
}