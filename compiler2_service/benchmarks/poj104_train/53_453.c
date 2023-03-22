#include <header.h>

int main_bench()
{
	int n;
	int s[300];
	int i;
	int j,k;
	my_scanf("%d", &n);
	for (i=0,j=0;i<n;i++)
	{
		my_scanf("%d",&s[j]);
		for (k=0;k<j;k++)
		{
			if (s[k]==s[j]) j--;
		}
		j++;
	}
	for (i=0;i<j;i++)
	{
		my_printf("%d",s[i]);
		if (i!=j-1) my_printf(",");
	}
	return 0;
}