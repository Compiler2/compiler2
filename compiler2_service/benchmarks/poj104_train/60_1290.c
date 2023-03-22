#define NUM_ITER 12298

#include <header.h>

main_bench()
{
	int n,a,b,i,j,sum=0;
	my_scanf ("%d",&n);
	for (a=3;a<=(n-2);a++)
	{
	  for (i=2;i<=(a/2);i++)
	   {
	     if (a%i==0)
	       break;
	   }
	      if (i>=a/2)
	        {
			  b=a+2;
			    for (j=2;j<=(b/2);j++)
			     {
				   if (b%j==0)
				    break; 
				 }
				 if (j>=(b/2))
				 {
				   my_printf("%d %d\n",a,b);
				   sum++;
				 }
			}
	    
	    
	}
	if (sum==0)
	{
	  my_printf ("empty");
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}