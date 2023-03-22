#define NUM_ITER 60423

#include <header.h>


int main_bench()
{
  int x,max,secondmax,n,t,i;
  my_scanf("%d %d",&n,&x);
  secondmax=max=x;
	  for(i=1;i<n;i++)
	  {
		  my_scanf("%d",&t);
		  if(t>max)
		  {
			  secondmax=max;
			  max=t;
		  }
		  else if(t>secondmax)
		  {
			  secondmax=t;
		  }
		  else if((max==secondmax)&&(i==1))
		  {
			  t=secondmax;
		  }
	  }
   my_printf("%d\n%d\n",max,secondmax);
   return 0;
}