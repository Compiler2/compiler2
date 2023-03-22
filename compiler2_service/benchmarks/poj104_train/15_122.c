#define NUM_ITER 698

#include <header.h>


int main_bench()
{
	int a, b, s, i, j;
	int x[100][100];

	int n;
	my_scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		    my_scanf("%d", &x[i][j]);
		}
	}  
	for(i=0; i<n; i++)
	{
		a = 0;
		for(j=0; j<n; j++)
		{
			if(x[i][j] == 255)
				continue;
			if(x[i][j] == 0)
				a = a+1;
		}
		if(a > 0)
			break;
	}
    for(j=0; j<n; j++)
	{
		b = 0;
		for(i=0; i<n; i++)
		{
			if(x[i][j] == 255)
				continue;
			if(x[i][j] == 0)
				b = b+1;
		}
		if(b > 0)
			break;
	}
	s = (a - 2)*(b - 2);
	my_printf("%d", s);
}