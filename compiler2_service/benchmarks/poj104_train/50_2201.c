#define NUM_ITER 611634

#include <header.h>

int day(int d)
{
  if (d>7)
    d=d%7;
  return d;
}
int main_bench()
{
  int w[13],a[13];
  int i,d;
  my_scanf ("%d",&w[1]);
  a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
  a[2]=28;
  a[4]=a[6]=a[9]=a[11]=30;
  for (i=2;i<=12;i++)
    w[i]=a[i-1]%7+w[i-1];
  for (i=1;i<=12;i++)
  {
    d=day (w[i]+5);
    if (d==5)
      my_printf ("%d\n",i);
  }
}