#define NUM_ITER 927621

#include <header.h>

int main_bench()
{
	char a[501],b[501];
	int i,m;
	double n;
	m=0;
	my_scanf("%lf",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int p=strlen(a);
	int q=strlen(b);
	if(p==q)
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
			{
				my_printf("error");
				return 0;
			}
			else
			{
				if((a[i])==(b[i]))
					m++;
			}
		}
		if((1.0*m/(p*1.0))>=n)
		{
			my_printf("yes");
		}
		else{my_printf("no");}
	}
	else
	{
		my_printf("error");
	}
	return 0;
}
