#include <header.h>

int main_bench()
{
	int n, len[200];
	char c[200][200];
	int i;
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s", c[i]);
		len[i]=strlen(c[i]);
	}
	int max=len[0], min=len[0];
	for(i=1;i<n;i++)
	{
		if(max<len[i])
			max=len[i];
		if(min>len[i])
			min=len[i];
	}
	if(max==min)
		my_printf("%s\n%s\n", c[0], c[0]);
	else
	{
		for(i=0;i<n;i++)
		{
			if(max==len[i])
			{
				my_printf("%s\n", c[i]);
				break;
			}
		}
		for(i=0;i<n;i++)
		{
			if(min==len[i])
			{
				my_printf("%s\n", c[i]);
				break;
			}
		}
	}
	return 0;
}

	


