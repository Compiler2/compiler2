#include <header.h>

int main_bench()
{
	char a[501],b[501];
	int num,i;
	int same=0,judge=1;
	double standard,actual;
	my_scanf("%lf",&standard);
	my_scanf("%s",a);
	my_scanf("%s",b);
	if(strlen(a)!=strlen(b))
	{
		my_printf("error");
	}
	else
	{
		num=strlen(a);
		for(i=0;i<num;i++)
		{
			if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='G')&&(a[i]!='C'))||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='G')&&(b[i]!='C')))
			{
				my_printf("error");
				judge=0;
				break;
			}
			else
			{
				if(a[i]==b[i])
				{
					same++;
				}
			}
		}
		if(judge!=0)
		{
			actual=1.0*same/num;
			if(actual>standard)
			{
				my_printf("yes");
			}
			else
			{
				my_printf("no");
			}
		}
	}
	return 0;
}