#define NUM_ITER 27508

#include <header.h>

int zhiyinshu(int x)
{
	int i=2;
	while (i<x)
	{
		if (x%i==0)
		{
			return 0;
		}
		else
		{
			i++;
		}
	}
	return 1;
}
int main_bench()
{
    int i,j,x;
    my_scanf("%d",&x);
    for (i=3;i<j;i++)
    {
        j=x-i;
        if ((zhiyinshu(i)==1)&&(zhiyinshu(j))) my_printf("%d %d\n",i,j);
    }
    return 0;
}