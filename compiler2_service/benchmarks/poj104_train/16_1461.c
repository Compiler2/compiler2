#define NUM_ITER 1951244

#include <header.h>

int main_bench()
  {int a[5],b=0;
  do 
  {a[b]=getchar();b++;}
  while(b<5);
  if (a[1]=='\n') my_printf("%c",a[0]);
  else if (a[2]=='\n') my_printf("%c%c",a[1],a[0]);
  else if (a[3]=='\n') my_printf("%c%c%c",a[2],a[1],a[0]);
  else if (a[4]=='\n') my_printf("%c%c%c%c",a[3],a[2],a[1],a[0]);
  else my_printf("00001");
  return 0;
}