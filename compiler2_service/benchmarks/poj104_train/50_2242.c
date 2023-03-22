#define NUM_ITER 1108156

#include <header.h>

int main_bench()
{
    int w,w1;
    
    my_scanf("%d", &w);
    if(w>=1 && w<=5)
        w1 = 6 - w;
    else
        w1 = 13- w;
    if(w==7)
        my_printf("1\n");
    if((13+31-w1)%7 == 0)
        my_printf("2\n");
    if((13+28+31-w1)%7 == 0)
        my_printf("3\n");
    if((13+31+28+31-w1)%7 == 0)
        my_printf("4\n");
    if((13+30+31+28+31-w1)%7 == 0)
        my_printf("5\n");
    if((13+31+30+31+28+31-w1)%7 == 0)
        my_printf("6\n");
    if((13+30+31+30+31+28+31-w1)%7 == 0)
        my_printf("7\n");
    if((13+31+30+31+30+31+28+31-w1)%7 == 0)
        my_printf("8\n");
    if((13+31+31+30+31+30+31+28+31-w1)%7 == 0)
        my_printf("9\n");
    if((13+30+31+31+30+31+30+31+28+31-w1)%7 == 0)
        my_printf("10\n");
    if((13+31+30+31+31+30+31+30+31+28+31-w1)%7 == 0)
        my_printf("11\n");
    if((13+30+31+30+31+31+30+31+30+31+28+31-w1)%7 == 0)
        my_printf("12\n");
    
    
    return 0;
}
