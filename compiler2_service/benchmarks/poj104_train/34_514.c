#define NUM_ITER 275111

#include <header.h>


int main_bench()
{
	int n;
	int m;
	my_scanf("%d",&n);
	for(int i=1;i<100;i++)
		{
			if(n==1)
			{
				my_printf("End");
				break;
			}
			else
			{
			if(n%2==1)
			{
				m=n*3+1;
				my_printf("%d*3+1=%d\n",n,m);
				n=m;
				m=0;
			}
			if(n%2==0)
			{
				m=n/2;
				my_printf("%d/2=%d\n",n,m);
				n=m;
				m=0;
			}
			}
		}
	
    return 0;
}
