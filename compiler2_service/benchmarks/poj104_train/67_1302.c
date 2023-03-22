#define NUM_ITER 36332

#include <header.h>

int main_bench()
{
  int n,i;
  double x,y;
  int zs[100],yx[100];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)  
  {
  	my_scanf("%d%d",&zs[i],&yx[i]);
  }
  x=1.0*yx[0]/zs[0];
   for(i=1;i<n;i++)  {
   	y=1.0*yx[i]/zs[i];
  	if(y-x>0.05)
  	{
  		my_printf("better");
  		my_printf("\n");
  	}
  	else if(x-y>0.05)
  	{
  	    my_printf("worse");
  	    my_printf("\n");
  	}
  	else
  	{
  		my_printf("same\n");
  	}
  }
return 0;
}