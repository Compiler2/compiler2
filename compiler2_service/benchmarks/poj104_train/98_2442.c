#define NUM_ITER 33927

#include <header.h>

int main_bench()
{
	int a,sum=0,i;
	char s[50];
	my_scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		my_scanf("%s",s);
		if (!sum)
		{
			my_printf("%s",s);
			sum=sum+(int)strlen(s);
		}
		else
		{
			if (sum+strlen(s)+1>80)
			{
				sum=0;
				my_printf("\n%s",s);
				sum=sum+(int)strlen(s);
			}
			else
			{
				sum=sum+(int)strlen(s)+1;
				my_printf(" %s",s);
			}
		}
	}
	return 0;
}