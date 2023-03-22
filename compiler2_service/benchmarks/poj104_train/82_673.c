#include <header.h>

int main_bench()
{
	int a,b,n;
	int i=1,h=0,t=0;
	my_scanf("%d",&n);
	while(i<=n)
	{
		my_scanf("%d %d",&a,&b);
		i=i+1;
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
			h=h+1;
			if(h>=t)
				t=h;
		}
		else if(h>=t)
		{
			t=h;
			h=0;
		}
		else
		{
			t=t;
			h=0;
		}
	}
	my_printf("%d",t);
	return 0;
}
