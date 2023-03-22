#define NUM_ITER 4364

#include <header.h>


void deal(int n)
{
     double a, b;
     a = 2.0;
     b = 1.0;
     double sum;
     sum = 0.0;
     int i;
     for(i = 0; i < n; i ++)
     {
           sum += a / b;
           double t;
           t = a;
           a = a + b;
           b = t;
     }
     my_printf("%.3lf\n", sum);
}
int main_bench()
{
    int m;
    my_scanf("%d", &m);
    int i;
    for(i = 0; i < m; i ++)
    {
          int n;
          my_scanf("%d", &n);
          deal(n);
    }
    return 0;
}
