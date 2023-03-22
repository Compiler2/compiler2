#define NUM_ITER 1811313

#include <header.h>

int main_bench(){
    int w,a,b;
    my_scanf("%d",&w);
    a=12%7;
    if(w+a==5)
    my_printf("1\n");
    if(w+a-7==5)
    my_printf("1\n");
    a=(31+12)%7;
    if(w+a==5)
    my_printf("2\n");
    if(w+a-7==5)
    my_printf("2\n");
    a=(31+28+12)%7;
    if(w+a==5)
    my_printf("3\n");
    if(w+a-7==5)
    my_printf("3\n");
    a=(31+28+31+12)%7;
    if(w+a==5)
    my_printf("4\n");
    if(w+a-7==5)
    my_printf("4\n");
    a=(31*2+28+30+12)%7;
    if(w+a==5)
    my_printf("5\n");
    if(w+a-7==5)
    my_printf("5\n");
    a=(31*3+28+30+12)%7;
    if(w+a==5)
    my_printf("6\n");
    if(w+a-7==5)
    my_printf("6\n");
    a=(31*3+28+60+12)%7;
    if(w+a==5)
    my_printf("7\n");
    if(w+a-7==5)
    my_printf("7\n");
    a=(31*4+28+60+12)%7;
    if(w+a==5)
    my_printf("8\n");
    if(w+a-7==5)
    my_printf("8\n");
    a=(31*5+28+60+12)%7;
    if(w+a==5)
    my_printf("9\n");
    if(w+a-7==5)
    my_printf("9\n");
    a=(31*5+28+90+12)%7;
    if(w+a==5)
    my_printf("10\n");
    if(w+a-7==5)
    my_printf("10\n");
    a=(31*6+28+90+12)%7;
     if(w+a==5)
    my_printf("11\n");
    if(w+a-7==5)
    my_printf("11\n");
    a=(31*6+28+120+12)%7;
     if(w+a==5)
    my_printf("12\n");
    if(w+a-7==5)
    my_printf("12\n");
    return 0;
}