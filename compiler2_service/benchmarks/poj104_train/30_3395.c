#define NUM_ITER 112479

#include <header.h>

int main_bench()
{
	int n,i,j;
	i=1;
	j=0;
	my_scanf("%d",&n);
	while(i<=n)
	{
		if(i%7!=0&&i%10!=7&&(i-70>=10||70-i>0))
			j=j+i*i;
		else
		{
			j=j;
		}
		i=i+1;
	}
	my_printf("%d",j);
	return 0;
}