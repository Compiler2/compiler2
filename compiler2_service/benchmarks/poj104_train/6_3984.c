#define NUM_ITER 35

#include <header.h>

int main_bench()
{
	int n;
	int p;
	int q;
	int i , j , k;
	my_scanf("%d" , &n);
	for(i = 0 ; i < n ; i++)
	{
		int sum = 0;
		int num;
		my_scanf("%d" , &p);
		my_scanf("%d" , &q);
		if(p == 1 && q == 1)
		{
			my_scanf("%d" , &num);
			my_printf("%d" , num);
			break;
		}
		for(j = 0 ; j < q ; j++)
		{
			my_scanf("%d" , &num);
			sum += num;
		}
		for(j = 1 ; j < p-1 ; j++)
		{
			for(k = 0 ; k < q ; k++)
			{
				my_scanf("%d" , &num);
				if(k == 0 || k == q-1)
				{
					sum += num;
				}
			}
		}
		for(j = 0 ; j < q ; j++)
		{
			my_scanf("%d" , &num);
			sum += num;
		}
		my_printf("%d\n" , sum);
	}
	


	return 0;
}
