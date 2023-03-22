#include <header.h>

int main_bench()
{
	char f[501],t[501];
	int i;
	double j=0,r=0,s=0;
	double n;
	my_scanf("%lf%s%s",&n,f,t);
	for(i=0;f[i]!='\0';i++)
	{
		j++;
	}
	for(i=0;t[i]!='\0';i++)
	{
		r++;
	}
	if(j!=r)
	{
		my_printf("error");
		return 0;
	}
    for(i=0;f[i]!='\0';i++)
	{
		if(f[i]!='A'&&f[i]!='T'&&f[i]!='C'&&f[i]!='G')
		{
			my_printf("error");
			return 0;
		}
	    if(t[i]!='A'&&t[i]!='T'&&t[i]!='C'&&t[i]!='G')
		{
			my_printf("error");
	        return 0;
		}
	}
	for(i=0;f[i]!='\0';i++)
	{
		if(f[i]==t[i])
		s++;
	}
	if(s/j>n)
	{
		my_printf("yes");
	}
	if(s/j<=n)
	{
		my_printf("no");
	}

	return 0;
}

