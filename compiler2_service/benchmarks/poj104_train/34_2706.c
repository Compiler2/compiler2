#define NUM_ITER 335935

#include <header.h>

int main_bench()
{
	int n,t,k;
	my_scanf("%d",&n);
	if(n!=1) for(k=1;t!=1;k++)
	{if(n%2==0){t=n/2;my_printf("%d/2=%d\n",n,t);n=t;if(n==1)break;}
	if(n%2!=0){t=n*3+1;my_printf("%d*3+1=%d\n",n,t);n=t;if(n==1)break;}}
	my_printf("End");
	
}
