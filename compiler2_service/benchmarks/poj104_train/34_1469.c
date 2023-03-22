#define NUM_ITER 309753

#include <header.h>


int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	while(1)
	{		
		while(n%2==0)
		{my_printf("%d/%d=%d\n",n,2,n/2);
		n=n/2;}
		if(n==1) break;
		else
		{
			my_printf("%d*%d+%d=%d\n",n,3,1,(n*3+1));
			n=n*3+1;
		}
	}
	my_printf("End\n");
}