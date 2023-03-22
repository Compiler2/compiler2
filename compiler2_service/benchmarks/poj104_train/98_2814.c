#define NUM_ITER 34716

#include <header.h>


int main_bench()
{
	int n;
	int i;
	int l;
	int left = 80;
	char word[10000][42];
	my_scanf("%d", &n);
	for(i = 0; i<n;i++)
	{
		my_scanf("%s", word[i]);
	}
	for(i = 0; i<n;i++)
	{
		l = strlen(word[i]);
		if(left == 80)
		{
			my_printf("%s", word[i]);
			left -= l;
		}
		else if(left >= l+1)
		{
			my_printf(" %s", word[i]);
			left -= l+1;
		}
		else
		{
			my_printf("\n%s", word[i]);
			left = 80 - l;
		}
	}
	return 0;
}