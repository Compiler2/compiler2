#define NUM_ITER 18065

#include <header.h>

int main_bench()
{
	int n, i, j=0, k;
	int* piInput, *piOdd;

	my_scanf("%d", &n);

	piInput = (int*)calloc(n, sizeof(int));
	piOdd = (int*)calloc(n, sizeof(int));

	for (i=0; i<n; i++)
	{
		my_scanf("%d", &piInput[i]);
		if (piInput[i] %2 ==1)
		{
			piOdd[j++] = piInput[i];
		}
	}

	
	for (i=0; i<j; i++)
	{
		for (k=i+1; k<j; k++)
		{
			if (piOdd[i]> piOdd [k])
			{
				n= piOdd[i];
				piOdd[i] = piOdd[k];
				piOdd[k]=n;
			}
		}
	}
	
	i=0;
	my_printf("%d", piOdd[i]);
	for (i=1; i<j; i++)
	{
			my_printf(",%d", piOdd[i]);
	}
	free(piInput);
	free(piOdd);

	return 0;
}
