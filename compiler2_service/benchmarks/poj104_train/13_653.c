#define NUM_ITER 14169

#include <header.h>

int compare(int s, int a[20000], int n)
{
	int i, temp=0;
	for(i=0; i<n; i++)
	{
		if(s==a[i])
		{
			return 1;
			temp=1;
			break;
		}
		else
			continue;
	}
	if(temp=0)
		return 0;
}

int main_bench()
{
	int n, a[20000], i, j, w=0;
	my_scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		my_scanf("%d", &a[i]);
		if(compare(a[i], a, i)==1)
			a[i]=-1;
		else
			continue;
	}
	for(i=0; i<n; i++)
	{
		if(a[i]==-1)
			continue;
		else
		{
			if(w==0)			
				my_printf("%d", a[i]);
			else
				my_printf(" %d", a[i]);
			w++;
		}
	}
	my_printf("\n");
	return 0;
}