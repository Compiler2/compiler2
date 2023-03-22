#include <header.h>


int main_bench()
{
	int n,i,m,j,x,y;
	int a[200],b[200],c[200];
	int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int e[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf ("%d",&a[i]);
		my_scanf ("%d",&b[i]);
		my_scanf ("%d",&c[i]);
	}
	for (i=0;i<n;i++)
	{
		m=0;
		if ((a[i]%4==0)&&(a[i]%100!=0)||(a[i]%400==0))
		{
			if (b[i]>=c[i])
			{
				x=c[i];
				y=b[i];
			}
			else
			{
				y=c[i];
				x=b[i];
			}
			for (j=x;j<y;j++)
			{
				m=m+e[j-1];
			}
			if (m%7==0)
			{
				my_printf ("YES\n");
			}
			else
			{
				my_printf ("NO\n");
			}
		}
		else
		{
			if (b[i]>=c[i])
			{
				x=c[i];
				y=b[i];
			}
			else
			{
				y=c[i];
				x=b[i];
			}
			for (j=x;j<y;j++)
			{
				m=m+d[j-1];
			}
			if (m%7==0)
			{
				my_printf ("YES\n");
			}
			else
			{
				my_printf ("NO\n");
			}
		}
	}
	return 0;
}