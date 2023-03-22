#include <header.h>

int main_bench()
{
	int n, m, time=0, i, x, j, mark;
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d", &m);
		if(m!=0)
		{
		for(j=1;j<m+1;j++)
		{
			my_scanf("%d", &x);
			if(time<60&&x+3*(j-1)>=60)
			{
				mark=60-3*(j-1);
			}
			if(time<60&&x+3*(j-1)<60&&x+3*(j-1)>57)
			{
				mark=x;
			}
			if(time<60&&x+3*j<60)
			{
				mark=60-j*3;
			}
			time=x+j*3;
		}
		}
		if(m==0)
		{
			mark=60;
		}
		my_printf("%d\n", mark);
	}
		return 0;
}