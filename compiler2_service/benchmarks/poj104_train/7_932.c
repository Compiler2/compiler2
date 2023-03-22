#define NUM_ITER 860994

#include <header.h>


int main_bench()
{
  char origin[256], sub[256], replace[256], after[256];
  my_scanf("%s%s%s", origin, sub, replace);
  
  int i, j, k=0;
  
  for (i=0; origin[i]; i++) {
    int shouldChange=1;
    for (j=0; sub[j]; j++) {
      if (origin[i+j]!=sub[j]) {
        shouldChange=0;
      }
    }
    if (shouldChange==1) {
      strcpy(after, origin);
      after[i]=0;
      strcat(after, replace);
      strcat(after, &origin[i+strlen(sub)]);
      strcpy(origin, after);
      i+=strlen(replace);
      break;
    }
  }
  my_printf("%s", origin);
  return 0;
}