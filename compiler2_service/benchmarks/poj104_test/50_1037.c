#define NUM_ITER 63669

#include <header.h>

int main_bench()
{
	int w,m,d,x;
	my_scanf("%d",&w);
	x=w;
	m=1;
	d=1;
	while (m<13)
	{
		if ((d==13)&&(x==5))
			my_printf("%d\n",m);
		d++;
		x++;
		if (x==8)
			x=1;
		if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
		{
			if (d==32)
			{
				d=1;
				m++;
			}
		}
		else if ((m==4)||(m==6)||(m==9)||(m==11))
		{
			if (d==31)
			{
				d=1;
				m++;
			}
		}
		else if ((m==2)&&(d==29))
		{
			d=1;
			m++;
		}
	}
	return 0;
}