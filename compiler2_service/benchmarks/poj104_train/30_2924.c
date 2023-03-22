#include <header.h>

int main_bench()
{
  int i, n, sum;
  my_scanf("%d", &n);
  sum = 0;
  for(i = 1; i <= n; i++){
  if(i % 7 == 0 || (i % 10 != 0) && (i % 10) % 7 == 0 || (i >= 11) && (int)(i / 10) % 7 == 0)
     continue;
  else
      sum += i*i;
    }
my_printf("%d", sum);
return 0;
}