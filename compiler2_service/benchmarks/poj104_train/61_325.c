#define NUM_ITER 59674

#include <header.h>


int main_bench()
{
    int data[20] = {1,1};
    int n;
    int a;
    int i, j;
    
    for(j = 2; j <= 19; j++)
                data[j] = data[j - 2] + data[j - 1];
    
    my_scanf("%d", &n);
    
    for(i = 0; i <= n - 1; i++)
    {
          my_scanf("%d", &a);
          my_printf("%d\n", data[a - 1]);
    }
    
    return 0;
}
          
          
          
          
