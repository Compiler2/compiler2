#define NUM_ITER 917382

#include <header.h>

int main_bench()
{
	char a[510],b[510];
	int x,y,i,p=0;
	double n,q;
	my_scanf("%lf",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
	x=strlen(a);
	y=strlen(b);
	if(x!=y)
	{
		my_printf("error");
	}
	else
	{
		for(i=0;i<x;i++)
		{
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
			{
				my_printf("error");
				return 0;
			}
			if(a[i]==b[i])
			p++;
		}
	q=n*x;
	if(p>q)
		my_printf("yes");
	else
		my_printf("no");

	}
return 0;
}