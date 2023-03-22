#include <header.h>

int main_bench()
{
	int n,i,j,len;
	char jianji[1000][300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",jianji[i]);
	}
	for (i=0;i<n;i++)
	{
		len=strlen(jianji[i]);
		for (j=0;j<len;j++)
		{
			if (jianji[i][j]=='A')
			{
				jianji[i][j]='T';
			}
			else if (jianji[i][j]=='T')
			{
				jianji[i][j]='A';
			}
			else if (jianji[i][j]=='C')
			{
				jianji[i][j]='G';
			}
			else if (jianji[i][j]=='G')
			{
				jianji[i][j]='C';
			}
		}
	
	}
	for (i=0;i<n;i++)
	{
		my_printf("%s\n",jianji[i]);
	}
	return 0;
}
