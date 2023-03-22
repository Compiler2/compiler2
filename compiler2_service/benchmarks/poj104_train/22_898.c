#include <header.h>

int main_bench()
{
	int e,a,b,c=0,h=1,x=1,m=0;
	char g;
	char f;
	my_scanf("%d%c",&e,&f);
	if(f!=',')
	{
		my_printf("No");
	}
	else
	{
		b=e;
		for(g=',';g==','; )
		{
			my_scanf("%d%c",&a,&g);
			if(a!=b)
			{
				h=0;
			}
			if(a>b)
			{
				c=b;
				b=a;
				x=0;
			}
			if(b>a&&a>c)
			{
				c=a;
				x=0;
			}
			if(m<=a&&a!=b)
			{
				m=a;
			}
		}
		if(h==1)
		{
			my_printf("No\n");
		}
		else if(x==1)
		{
			my_printf("%d\n",m);
		}
		else if(x==0)
		{
			my_printf("%d\n",c);
		}
	}
	return 0;
}

		




			

		
