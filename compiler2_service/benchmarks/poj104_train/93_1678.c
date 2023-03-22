#define NUM_ITER 1141378

#include <header.h>

main_bench()
{
    int x;
    my_scanf("%d",&x);
    if(x%3==0&&x%5==0&&x%7==0) my_printf("3 5 7");
    else{if(x%3==0&&x%5==0) my_printf("3 5");if(x%3==0&&x%7==0) my_printf("3 7");if(x%7==0&&x%5==0) my_printf("5 7"); }
    if(x%3==0&&x%5&&x%7) my_printf("3");  if(x%5==0&&x%3&&x%7) my_printf("5");if(x%7==0&&x%5&&x%3) my_printf("7");
    if(x%3&&x%5&&x%7) my_printf("n");

    return 0;
}
