#define NUM_ITER 328931

#include <header.h>

int main_bench()
{
	int n,j,k;
	long int i;
	my_scanf("%d",&n);
	for(i=1;i<=10000000;i++)
	{
		if(n==1)
			break;
		else
		{
			if(n%2==0)
			{
				j=n;
				k=j/2;
				my_printf("%d/2=%d\n",j,k);
				n=k;
			}
			else
			{
				j=n;
				k=j*3+1;
				my_printf("%d*3+1=%d\n",j,k);
				n=k;
			}
		}
	}
	my_printf("End\n");
	return 0;
}