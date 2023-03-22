#define NUM_ITER 30893

#include <header.h>


int main_bench()
{
    int n;
    
    my_scanf("%d", &n);
    
    int *normal = (int *) malloc(sizeof(int) * n);
    
    int hi, lo;
    
    int i;
    
    int max = 0;
    int len;
    int previous = -1;
    
    for(i = 0; i <= n - 1; i++)
    {
          my_scanf("%d %d", &hi, &lo);
          if( (lo >= 60) && (lo <= 90) && (hi >= 90) && (hi <= 140) )
          {}
          else
          {
              len = i - previous - 1;
              previous = i;
              if(len > max)
                     max = len;
          }
    }
    
    i = n;
    len = i - previous - 1;
    if(len > max)
                     max = len;
                     
    my_printf("%d", max);
    
    
   
    return 0;
}

