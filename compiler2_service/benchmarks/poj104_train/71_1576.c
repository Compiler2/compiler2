#define NUM_ITER 7268

#include <header.h>

int main_bench()
{
	int n, y[200], m1[200], m2[200], i, j, x[12], s;
	my_scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d%d%d", &y[i], &m1[i], &m2[i]);
	}
	x[1]=31;
	x[3]=31;
	x[4]=30;
	x[5]=31;
	x[6]=30;
	x[7]=31;
	x[8]=31;
	x[9]=30;
	x[10]=31;
	x[11]=30;
	x[12]=31;
    for (i=0;i<n;i++)
	{
		s=0;
		if (y[i]%400==0||(y[i]%4==0&&y[i]%100!=0))
		{
			x[2]=29;
		}
		else x[2]=28;
		if (m1[i]<m2[i])
		{
			for (j=m1[i];j<m2[i];j++)
			{
				s=s+x[j];
			}
			if (s%7==0)
			{
				my_printf("YES\n");
			}
			else my_printf("NO\n");
		}
		else 
		{
			for (j=m2[i];j<m1[i];j++)
			{
				s=s+x[j];
			}
			if (s%7==0)
		{
			my_printf("YES\n");
		}
		else my_printf("NO\n");
		}
	}
	return 0;
}