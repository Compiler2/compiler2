#include <header.h>

int main_bench()
{
	int i,n,k,j;
	my_scanf("%d",&n);
	char zfc[100001];
	for(i=0;i<n;i++)
	{
		my_scanf("%s",zfc);
		for(k=0;zfc[k];k++)
		{
			for(j=0;zfc[j];j++)
			{
				if(zfc[k]==zfc[j]&&k!=j)
				{
					break;
				}
			}
			if(zfc[j]=='\0')
			{
				my_printf("%c\n",zfc[k]);
				break;
			}
		}
		if(zfc[k]=='\0')
		{
			my_printf("no\n");
		}
	}
	return 0;
}
