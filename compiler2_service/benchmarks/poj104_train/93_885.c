#define NUM_ITER 1418445

#include <header.h>

int main_bench()
{
	int n,i,j=3,flag=0;
	my_scanf("%d",&n);
	for (i=3;i<=7;i+=2)
	{
		if (n%i==0&&flag==0) 
		{
			my_printf("%d",i);
			flag=1;
		}
		else if (n%i==0&&flag==1) my_printf(" %d",i);
		else j--;
	}
	if (j==0) my_printf ("n");
	return 0;
}