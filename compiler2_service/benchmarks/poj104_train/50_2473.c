#define NUM_ITER 873244

#include <header.h>

int main_bench()
{
  int w,d[12],i;
  my_scanf("%d",&w);
  d[0]=w;
  d[1]=d[0]+12;
  d[2]=d[1]+31;
  d[3]=d[2]+28;
  d[4]=d[3]+31;
  d[5]=d[4]+30;
  d[6]=d[5]+31;
  d[7]=d[6]+30;
  d[8]=d[7]+31;
  d[9]=d[8]+31;
  d[10]=d[9]+30;
  d[11]=d[10]+31;
  d[12]=d[11]+30;
   for (i=1;i<=12;i++)
   {
      if (d[i]%7==5) my_printf ("%d\n",i);
    }
  return 0;
}
  