#define NUM_ITER 1107527

#include <header.h>

int main_bench()
{
  char a,b,c,d,e;
  a=b=c=d=e=0;
  my_scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
  if(e!='\n'&&e)
    putchar(e);
  if(d!='\n'&&d)
    putchar(d);
  if(c!='\n'&&c)
    putchar(c);
  if(b!='\n'&&b)
    putchar(b);
  putchar(a);
}