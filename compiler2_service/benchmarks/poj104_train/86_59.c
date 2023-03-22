#define NUM_ITER 1199

#include <header.h>


int main_bench()
{
	int n, i, j, a[100][60];
	my_scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		my_scanf("%d", &a[i][0]);
		for(j = 1; j <= a[i][0]; j++)
		{
			my_scanf("%d", &a[i][j]);
		}
		int num = 60;
		if(a[i][0] == 0)
			my_printf("60\n");
	    for(j = a[i][0]; j >= 1; j--)
		{
			if(a[i][j] + j * 3 <= 60)
			{
				my_printf("%d\n", 60 - j * 3 );
				break;
			}
			else if(a[i][j] + j * 3 <= 63)
			{
				my_printf("%d\n", 60 - (j - 1) * 3 - 63 + a[i][j] + j * 3);
				break;
			}
		}
	}
	return 0;
}

