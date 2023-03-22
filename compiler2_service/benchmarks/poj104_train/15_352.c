#include <header.h>

int main_bench()
{
	int n,i,j;
	int d1, d2;
	my_scanf("%d",&n);
	

	int sx = 0, sy, tx, ty;
	for (i=0; i<n; i++)
	{
		my_scanf("%d", &d1);
		for (j=1; j<n; j++)
		{
			my_scanf("%d", &d2);
			if ((d1==0)&&(d2==0))
			{
				if (sx==0)
				{
					sx = i; sy = j;
				}
				tx = i; ty = j+1;
			}
			d1 = d2;
		}
	}

	my_printf("%ld", (long)(ty-sy-1)*(long)(tx-sx-1));

	return 0;
} 

