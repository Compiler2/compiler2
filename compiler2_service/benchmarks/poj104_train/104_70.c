#define NUM_ITER 1405040

#include <header.h>

int main_bench()
{
  int x,y,cx,cy,t;
  my_scanf("%d%d",&x,&y);
  t=2;cx=1;
  while(x>=t)
  {
    t=t*2;
	cx++;
  }
  t=2;cy=1;
  while(y>=t)
  {
    t=t*2;
	cy++;
  }
  while(!(x==y))
  {
    if(cx>=cy)
	{
      x=x/2;
	  cx--;
	}
	else
	{
      y=y/2;
	  cy--;
	}
  }
  my_printf("%d\n",x);
}