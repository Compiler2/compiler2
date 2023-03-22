#define NUM_ITER 261081

#include <header.h>


void gj(int k)
{
  int i,j,m;
  if(k==1)
  {
   my_printf("End\n");
   return;
  }
  if(k%2==1)
  {
    my_printf("%d*3+1=%d\n",k,3*k+1);
	gj(3*k+1);
  }
  else
  {
    my_printf("%d/2=%d\n",k,k/2);
	gj(k/2);
  }
}

int main_bench()
{
  int k;
  my_scanf("%d",&k);
  gj(k);
  return 0;
}