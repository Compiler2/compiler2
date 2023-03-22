#define NUM_ITER 324819

#include <header.h>

main_bench()
{
  int a,b,c,d,e,i,j,n;
  my_scanf("%d",&n);
  do
  {
	if(n==1)
		my_printf("End");
	else
	{
	  if(n%2==1)
	  {  my_printf("%d",n);
	     n=n*3+1;
	     my_printf("*3+1=%d\n",n);
		 if(n==1)
			 my_printf("End");
	  }
	  if(n%2==0)
	  {
	     my_printf("%d",n);
		 n=n/2;
		 my_printf("/2=%d\n",n);
if(n==1)
			 my_printf("End");
	  }
	}
  }while(n!=1);
}