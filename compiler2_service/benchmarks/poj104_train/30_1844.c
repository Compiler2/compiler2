#define NUM_ITER 178291

#include <header.h>

int main_bench()
{
    int i, sum, n=100;
    my_scanf("%d%d%d", &n, &i, &sum);
    for(i=0; i<=n; i++)
    {
      if(i%7==0||i==17||i==27||i==37||i==47||i==57||i==67||i==87||i==97||i==71||i==72||i==73||i==74||i==75||i==76||i==78||i==79)
       {
        continue;
       }
      else{
            sum+=i*i;
          }
    };
    my_printf("%d", sum);
    return 0;
} 