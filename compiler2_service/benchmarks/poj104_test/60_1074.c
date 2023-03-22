#define NUM_ITER 5915

#include <header.h>


int prime(int i)
{
    int j;
    int output = 0;
    int count = 0;
    
    if(i == 1 || i == 2)
         output = 0;
    else
    {
    for(j = 1; j <= i; j++)
          if((i / j) * j == i)
               count++;
    
    if(count == 2)
             output = 1;
    }
    
    
    return output;
}
             
     

int main_bench()
{
    int n;
    my_scanf("%d", &n);
    int count = 0;
    int i;
    for(i = 3; i <= n - 2; i = i + 2)
    {
          if(prime(i) == 1 && prime(i + 2) == 1)
          {
                      my_printf("%d %d\n", i, i + 2);
                      count++;
          }
                      
    }
    if(count == 0) my_printf("empty");
 
    return 0;
}

