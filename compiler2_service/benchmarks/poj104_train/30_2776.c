#include <header.h>

int main_bench()
{
	int n,a=0,m;
	my_scanf ("%d",&n);
	while (n>0)
	{
		if (n%7==0)
		{n--;continue;}
		if (n%10==7)
		{n--;continue;}
		else
		{m=n/10;}
		if (m%10==7)
		{n--;continue;}
		else 
		{a=n*n+a;n--;}
	}
	my_printf("%d\n",a);
	return 0;
}
