#define NUM_ITER 9846

#include <header.h>


int main_bench()
{
	int result[1000];
	int n,flag = 0;
	int k,i,index = 0,j;
	my_scanf("%d",&k);
	for(i = 0; i < k; i++)
	{
		my_scanf("%d",&n);
		for(j = 0; j < index; j++)
		{
			if(result[j] == n)
			{
				flag = 1;
				break;
			}
		}
		if((j == index) && (!flag))
		{
			result[index] = n;
			index++;
		}
		flag = 0;
	}
	for(i = 0; i < index - 1; i++)
	{
		my_printf("%d,",result[i]);
	}
	my_printf("%d",result[index - 1]);
	return 0;
}


