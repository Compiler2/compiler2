#include <header.h>


int main_bench()
{
	int n,i,sum,c;
	sum = 0;
	
   	my_scanf("%d",&n);
	i=0;
	while(i<n)
	{
	i++;

	c=i/10;
	if (i%7==0 || i/10==7 || i-c*10==7)
		{
			continue;
		}
	sum = sum+i*i;
	}
	my_printf("%d\n",sum);
	return 0;
}

