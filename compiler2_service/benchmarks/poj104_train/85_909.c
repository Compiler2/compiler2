#include <header.h>

int main_bench()
{
	int n,i,t;
	char zfc[100][21];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",zfc[i]);
		for(t=0;zfc[i][t]!=0;t++)
		{
			if(zfc[i][t]<'0'||(zfc[i][t]>'9'&&zfc[i][t]<'A')||(zfc[i][t]>'Z'&&zfc[i][t]<'_')||(zfc[i][t]>'_'&&zfc[i][t]<'a')||zfc[i][t]>'z')
			{
				my_printf("no\n");
				break;
			}
			else if(zfc[i][0]>='0'&&zfc[i][0]<='9')
			{
                my_printf("no\n");
				break;
			}
		}
		if(zfc[i][t]==0)
		{
			my_printf("yes\n");
		}
	}
	return 0;
}
	