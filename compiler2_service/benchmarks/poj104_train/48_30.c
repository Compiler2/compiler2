#include <header.h>


void output(int a[9][9])
{
     int x, y;
     	for(x = 0;x <= 8;x ++)
	{
		for(y = 0;y <= 8;y ++)
		{
			my_printf("%d", a[x][y]);
			if(y != 8)my_printf(" ");
		}
		my_printf("\n");
	}
}



int main_bench()
{
	int a[9][9] = {0};
	int i, j, k;


	int addup[9][9] = {0};

	int m , day;
	int x, y;
	my_scanf("%d", &m);
	my_scanf("%d", &day);
	a[4][4] = m;

	for(i = 1;i <= day;i ++)
	{
		for(x = 0;x <= 8; x++)
		{
			
			for(y = 0;y <= 8;y ++)
			{

				{
					addup[x - 1][y - 1] += a[x][y];
					addup[x - 1][y] += a[x][y];
					addup[x - 1][y + 1] += a[x][y];
					addup[x][y - 1] += a[x][y];
					addup[x][y] += 2 * a[x][y];
					addup[x][y + 1] += a[x][y];
					addup[x + 1][y - 1] += a[x][y];
					addup[x + 1][y] += a[x][y];
					addup[x + 1][y + 1] += a[x][y];

                    
					




				}
			}
		}
		
		
		for(x = 0;x <= 8;x ++)
		{
			for(y = 0;y <= 8;y ++)
			{
				a[x][y] = addup[x][y];
				addup[x][y] = 0;
			}
		}
  

	}
 output(a);
}