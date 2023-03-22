#define NUM_ITER 35955

#include <header.h>

int main_bench()
{
	int n,i,k;
	char w[10];
	my_scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s", w);
		for (k=0;w[k]!='\0';k++)
		{
		}
		if (w[k-1]=='r'||w[k-1]=='y')
			w[k-2]='\0';
		else
			w[k-3]='\0';
		my_printf("%s\n", w);
	}
	return 0;
}

