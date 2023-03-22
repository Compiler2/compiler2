#define NUM_ITER 277898

#include <header.h>


int main_bench()
{
    int operate(int n);
    int n;
    
    my_scanf("%d", &n);
    while(n != 1)
    n = operate(n);
    
    my_printf("End");
    
    return 0;
    
}

int operate(int n)
{
    int nn;
    if(n % 2 == 0)
    {
         nn = n / 2;
         my_printf("%d/2=%d\n", n, nn);
    }
    else
    {
         nn = 3 * n + 1;
         my_printf("%d*3+1=%d\n", n, nn);
    }
    return nn;
}


	
