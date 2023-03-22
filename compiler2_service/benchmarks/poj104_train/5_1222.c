#define NUM_ITER 898204

#include <header.h>



int main_bench()
{
	char first[1024];
	char second[1024];
	float rate = 0.0f;
	my_scanf("%f", &rate);
	my_scanf("%s", first);
	my_scanf("%s", second);

	int n1 = strlen(first);
	int n2 = strlen(second);
	
	if (n1 != n2)
	{
		my_printf("error");
		return 0;
	}

	for (int i = 0; i < n1; ++i)
	{
		if (first[i] != 'A' &&
			first[i] != 'T' &&
			first[i] != 'C' &&
			first[i] != 'G' &&
			second[i] != 'A' &&
			second[i] != 'T' &&
			second[i] != 'C' &&
			second[i] != 'G')
		{
			my_printf("error");
			return 0;
		}
	}

	int same = 0;
	for (int i = 0; i < n1; ++i)
	{
		if (first[i] == second[i])
			same++;
	}

	float actual = (float)same / (float)n1;
	if (actual >= rate)
		my_printf("yes");
	else
		my_printf("no");

	return 0;
}