#define NUM_ITER 30606

#include <header.h>

main_bench()
{
  	int n;
  	my_scanf ("%d",&n);
  	int i;
  	double a[500],b[500];
  	for(i=0;i<n;i++)
  	{
	  my_scanf ("%d %d",&a[i],&b[i]);			
	}
    double c[500];
    char r[500][500];
    for (i=0;i<n;i++)
    {
		c[i]=b[i]/a[i];
	
	}
	for (i=1;i<n;i++)
	{
		if (i<n)
	  {
			if ((c[i]-c[0])>0.05)
	   {
	      my_printf ("better\n");
	   }
	   else if ((c[0]-c[i])>0.05)
	    {
		 my_printf ("worse\n");
		}
	   else 
	   {
	      my_printf ("same\n");
	   }	  
	  }
	  else 
	  {
	   	if ((c[i]-c[0])>0.05)
	   {
	     my_printf ("better");
	   }
	   else if ((c[0]-c[i])<0.05)
	    {
		 my_printf ("worse");
		}
	   else 
	   {
	     my_printf ("same");
	   }	  
	  }
	  
	  
	}
	

}