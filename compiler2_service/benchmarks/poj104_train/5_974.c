#include <header.h>

int main_bench()
{
	int i,m,n,x=0;
	double p,y;
	char a[500],b[500];
	my_scanf("%lf\n",&p);
	gets(a);
	gets(b);
	m=strlen(a);
	n=strlen(b);
	if(m!=n)
	{
		my_printf("error");
		return 0;
	}
	else
	{
		for(i=0;i<m;i++)
		{
			if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'||b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
			{
				my_printf("error");
				return 0;
			}
			else
			{
				if(a[i]==b[i])
				{
					x++;
				}
			}
		}
		y=(double)x/m;
		if(y>p)
		{
			my_printf("yes");
		}
		else
		{
			my_printf("no");
		}
		return 0;
	}
}
