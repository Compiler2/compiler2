#define NUM_ITER 297335

#include <header.h>

int main_bench()
{  
	int n;
	my_scanf("%d",&n);
	while (1)
	{
		if(n==1)
		{
			my_printf("End\n");
			break;
		}
		else
		{
		   if(n%2==0)
		   { 
			   my_printf("%d/2=%d\n",n,n/2);
		       n=n/2;
		   }
		   else
		   {
			   my_printf("%d*3+1=%d\n",n,n*3+1);
			   n=n*3+1;
		   }
		}
	}
			  


	return 0;
}