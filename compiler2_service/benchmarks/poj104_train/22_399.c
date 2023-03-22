#include <header.h>

int main_bench()
{
	int i,j,num;
	int m=-100000;
	int n=-100000;
	int a[300];
	char c[300];
	for (i=0;i<300;i++)
	{
		my_scanf("%d%c",&a[i],&c[i]);
		if (c[i]=='\n') break;
	}
	num=i;
	if (i==0)
		my_printf("No");
	else
	{
		for (i=0;i<=num;i++)
			if (a[i]>m) m=a[i];
		for (i=0;i<=num;i++)
		{
			if (a[i]==m)
			{
				a[i]=-10000;
			}
		}
		for (i=0;i<=num;i++)
			if (a[i]>n) n=a[i];
		if (n==m||n==-10000)
			my_printf("No");
		else	
			my_printf("%d",n);
	}
	return 0;
}

