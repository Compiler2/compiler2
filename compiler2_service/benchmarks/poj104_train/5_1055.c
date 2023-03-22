#define NUM_ITER 899369

#include <header.h>

int main_bench()
{
	double n,b;
	my_scanf("%lf",&n);
	int i,m,a,o;
	a=0;
	char ji[1000],yin[1000];
	my_scanf("%s",ji);
	my_scanf("%s",yin);
	m=strlen(ji);
	o=strlen(yin);
	if(m!=o)
	{
		my_printf("error");
		return 0;
	}
	for(i=0;i<m;i++)
	{
		if((ji[i]!='A'&&ji[i]!='C'&&ji[i]!='G'&&ji[i]!='T')||(yin[i]!='A'&&yin[i]!='C'&&yin[i]!='G'&&yin[i]!='T'))
		{
			my_printf("error");
			return 0;
		}
	}
	if(n>=1)
	{
		my_printf("no");
		return 0;
	}
	for(i=0;i<m;i++)
	{
		if(ji[i]==yin[i])
		{
			a++;
		}
	}
	b=1.0*a/1.0*m;
	if(b>=n)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	return 0;
}

