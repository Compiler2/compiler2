#define NUM_ITER 24860

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char zfc[1000][1000];
	int i,j;
	int len;
	for (i=0;i<n;i++)
	{
		my_scanf("%s",zfc[i]);
		len=(strlen)(zfc[i]);
		for (j=0;j<len;j++)
		{
			if (zfc[i][j]==65)
			{
				zfc[i][j]=84;
				continue;
			}
			if (zfc[i][j]==84)
			{
				zfc[i][j]=65;
				continue;
			}
			if (zfc[i][j]==67)
			{
				zfc[i][j]=71;
				continue;
			}
			if (zfc[i][j]==71)
			{
				zfc[i][j]=67;
				continue;
			}


		}
		my_printf("%s\n",zfc[i]);
	}


	return 0;
}

