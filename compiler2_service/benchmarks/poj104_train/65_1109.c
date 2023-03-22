#include <header.h>


int main_bench()
{
  int ac = 0;
  int bc = 0;
  int a, b;
  int i, n;
  my_scanf("%d", &n);
  for (i = 0; i < n; i++) {
    my_scanf("%d %d", &a, &b);
    if ((a + 1) % 3 == b)
      ac++;
    else if ((b + 1) % 3 == a)
      bc++;
  }
  if (ac > bc)
    my_printf("A");
  else if (bc > ac)
    my_printf("B");
  else
    my_printf("Tie");
  return 0;
}