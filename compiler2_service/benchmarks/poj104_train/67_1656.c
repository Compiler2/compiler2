#include <header.h>


int main_bench()
{
  int n,i;
  double a[1000];
  double b[1000];
  my_scanf("%d",&n);

  for(i=0; i<n; i++)
	  my_scanf("%lf %lf",&a[i],&b[i]);
  for(i=1; i<n; i++)
  {
    if(b[i]/a[i]-b[0]/a[0]>0.05)
		my_printf("better\n");
	else if(b[0]/a[0]-b[i]/a[i]>0.05)
		
			my_printf("worse\n");
		else
			my_printf("same\n");
  }

  
 
  
  return 0;
}