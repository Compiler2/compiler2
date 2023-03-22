#define NUM_ITER 1662083

#include <header.h>


int main_bench()
{
    int n,i=0,j=0;
    my_scanf("%d",&n);
    if(n%3==0)
    {my_printf("3");i=1;}
if(n%5==0)
    {
    if(i==1)
    {
        my_printf(" ");

    }
    my_printf("5");
    j=1;
    }
if(n%7==0)
    {
    if(j==1||i==1)
    {
        my_printf(" ");
    }

    my_printf("7");
    }
    else if(i==0&&j==0)
    {
        my_printf("n")  ;
    }

    
    return 0;
}
