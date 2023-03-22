#define NUM_ITER 18838

#include <header.h>

main_bench()
{
	int n,i;
double rat[100],e[100],su[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	  {my_scanf("%lf %lf",&e[i],&su[i]);
	  rat[i]=su[i]/e[i];
	  if(i>0) 
	  	{
  		if(rat[i]-rat[0]>0.05)  my_printf("better\n");
  		else if(rat[i]-rat[0]<-0.05)  my_printf("worse\n");
  		else my_printf("same\n");
  	    }    
	  }
} 