#include <header.h>

int main_bench()
{
	int n,i,j;
	int count=0;
	int s=0;
	my_scanf("%d",&n);
	for (j=0;j<(n*n);j++)
	{
		my_scanf("%d",&i);
		if (i==0)
			count++;
	}
	count=count/4-1;
    s=count*count;
	my_printf("%d",s);
	return 0;
}
