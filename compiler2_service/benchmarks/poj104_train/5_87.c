#include <header.h>

int main_bench()
{
	int i,j,time=0;
	double p;
	char a[501],b[501];
	char c[5]="ATCG";
	my_scanf("%lf",&p);
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=c[0]&&a[i]!=c[1]&&a[i]!=c[2]&&a[i]!=c[3])
		{
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=c[0]&&a[i]!=c[1]&&a[i]!=c[2]&&a[i]!=c[3])
		{
			my_printf("error");
			return 0;
		}
	}
	if(strlen(a)!=strlen(b))
	{
		my_printf("error");
		return 0;
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[i])
		{
			time++;
		}
	}
	if(p<(double)time/strlen(a)||p==(double)time/strlen(a))
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	return 0;
}


