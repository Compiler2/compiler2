#define NUM_ITER 1600427

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    if (n%(3*5*7)==0) my_printf("3 5 7\n");
    else if (n%(3*5)==0) my_printf("3 5\n");
    else if (n%(3*7)==0) my_printf("3 7\n");
    else if (n%(5*7)==0) my_printf("5 7\n");
    else if (n%3==0) my_printf("3\n");
    else if (n%5==0) my_printf("5\n");
    else if (n%7==0) my_printf("7\n");
    else my_printf("n\n");
    return 0;    
}