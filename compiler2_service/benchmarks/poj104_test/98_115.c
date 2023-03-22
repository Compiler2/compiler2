#define NUM_ITER 28129

#include <header.h>

int main_bench()
{
	int n, i, t[1000]={0}, k=0;
	char word[1000][40]={""};

	my_scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		my_scanf("%s", word[i]);
		t[i] = strlen(word[i]);
	}

	for(i=0; i<n-1; i++)
	{
		k = k+t[i]+1;
		if(k-1<=80 && k+t[i+1]<=80)
			my_printf("%s ", word[i]);
		else if(k-1<=80)
			my_printf("%s\n", word[i]);
		else
		{
			k = t[i]+1;
			my_printf("%s ", word[i]);
		}
	}
	my_printf("%s", word[n-1]);
}