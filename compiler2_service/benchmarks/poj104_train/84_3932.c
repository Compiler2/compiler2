#include <header.h>


int main_bench()
{
	int n = 0;
	int maxNum = 0;
	int secMax = 0;
	int temp = 0;

	my_scanf("%d", &n);	

	for (int i = 0; i < n; i++)
	{
		my_scanf("%d", &temp);
		if (temp > maxNum)
		{
			secMax = maxNum;
			maxNum = temp;
		}
		else
		{
			if (temp > secMax)
			{
				secMax = temp;
			}
		}
	}

	my_printf("%d\n%d\n", maxNum, secMax);
}