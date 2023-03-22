#include <header.h>

int main_bench()
{
	char a[501],b[501];
	int sum=0,i,lena,lenb,t=0;
	double n,bi;
	my_scanf("%lf",&n);
	my_scanf("%s%s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	for(i=0;i<lena;i++)
	{
		if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')
		{
			t++;
		}
	}
	for(i=0;i<lenb;i++)
	{
		if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')
		{
			t++;
		}
	}

	if(lena!=lenb||t!=0)
	{
		my_printf("error");
	}
	else
	{
		for(i=0;i<lena;i++)
		{
			if(a[i]==b[i])
			{
				sum++;
			}
		}
		bi=(double)sum/lena;
		if(bi>n)
		{
			my_printf("yes");
		}
		else
		{
			my_printf("no");
		}
	}
	return 0;
}

		
	