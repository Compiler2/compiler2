#define NUM_ITER 851862

#include <header.h>

int main_bench()
{
	int w,i=0,a[400],x=0,y,z,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&w);
	for(i=1;i<=12;i++)
	{
	x=x+month[i-1];
	z=(x+12)%7;
	y=w+z;
	  if(y>7)
	  {
		  y=y-7;
		  if(y==5)
		  {
			  my_printf("%d\n",i);
		  }
		  else
		  {
			  continue;
		  }
	  }
	  else
	  {
		  if(y==5)
		  {
			  my_printf("%d\n",i);
		  }
		  else
		  {
			  continue;
		  }
	  }
	}
	return 0;
}

		



	