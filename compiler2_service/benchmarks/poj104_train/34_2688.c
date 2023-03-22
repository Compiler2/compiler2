#define NUM_ITER 253262

#include <header.h>

int main_bench()
{
	int n,t;
	my_scanf("%d\n",&n);
	t=n;
	if(n==1)
	my_printf("End");
	if(n!=1)
	{	do
	{
	        if(t%2!=0&&t!=1)
			{
			my_printf("%d*3+1=%d\n",t,t*3+1);
	        t=t*3+1;
			}
	        if(t%2==0&&t!=1)
			{
	 	     my_printf("%d/2=%d\n",t,t/2);
	         t=t/2;
			}
	}while(t!=1);	
	my_printf("End");}
	
}