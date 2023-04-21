#define NUM_ITER 1676337

#include <header.h>

int main_bench()
{
 int n;
 my_scanf("%d",&n);
 if(n%3==0)
 {my_printf("3");if(n%5==0){my_printf(" 5");}if(n%7==0){my_printf(" 7");}}
 else if(n%5==0)
 {my_printf("5");if(n%7==0){my_printf(" 7");}}
 else if(n%7==0){my_printf("7");}
 else {my_printf("n");}   
    getchar();
    getchar();
    return 0;
}
