#include <header.h>

int main_bench()
{
int n,i,s,l;
int a,b;
my_scanf("%d",&n);
s=0;
l=0;
for(i=1;i<=n;i++)
{
	my_scanf("%d%d",&a,&b);
	if(a>=90&&a<=140&&b>=60&&b<=90)
	{
		s=s+1;
	}
	else
	{
		if(s>=l)
		{
			l=s;
			s=0;
		}
		else
		{
		    s=0;
		}
	}
}
if(l>=s)
my_printf("%d\n",l);
else
my_printf("%d\n",s);
}

