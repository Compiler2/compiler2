#include <header.h>


int main_bench()
{
  char origin[30000];
  gets(origin);
  
  int i, total=0, first=1;
  
  for (i=0; origin[i]; i++) {
    if (origin[i]!=' ') {
      ++total;
    } else {
      if (origin[i-1]!=' ') {
        if (first==1) {
          my_printf("%d", total);
          first=0;
        } else {
          my_printf(",%d", total);
        }
      }
      total=0;
    }
  }
  
  if (first==1) {
    my_printf("%d",total);
  } else {
    my_printf(",%d",total);
  }
  return 0;
}