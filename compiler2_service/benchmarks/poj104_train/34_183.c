#include <header.h>

int main_bench()
{
   int n,i;
   my_scanf("%d",&n);
while(1)
{
	
	if(n%2==0)
   {
     my_printf("%d/2=%d\n",n,n/2);
     n=n/2;
	 if(n==1) 
	 {
		 my_printf("End");
		 break;
	 }
	 }
	if(n%2)
	{
	  if(n==1) 
	 {
		 my_printf("End");
		 break;
	 }
	  my_printf("%d*3+1=%d\n",n,n*3+1);
	  n=n*3+1;
	  
	}
	
}
}
