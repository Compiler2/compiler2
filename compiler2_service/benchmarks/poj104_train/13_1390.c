#define NUM_ITER 45305

#include <header.h>

int main_bench()
{
	int n;
	int histgram[101];
	int i;
	int x;

	my_scanf("%d",&n);
	for (i=0; i<101; i++)
	{
		histgram[i]=0;
	}

	my_scanf("%d", &x);
	histgram[x]++;
	my_printf("%d",x);

	for (i=0; i<n-1; i++)
	{
		my_scanf("%d", &x);
		if (!histgram[x])
		{
			my_printf(" %d",x);
		}
		histgram[x]++;
	}

	return 0;
}