#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	char zfc[1000][300];
	int k[1000];
	for(i=0;i<n;i++)
	{
		my_scanf("%s",zfc[i]);
		k[i]=strlen(zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<k[i];j++)
		{
			if(zfc[i][j]=='A')
			{
				zfc[i][j]='T';
			}
			else if(zfc[i][j]=='T')
			{
				zfc[i][j]='A';
			}
			else if(zfc[i][j]=='G')
			{
				zfc[i][j]='C';
			}
			else if(zfc[i][j]=='C')
			{
				zfc[i][j]='G';
			}
		}
		my_printf("%s\n",zfc[i]);
	}
	return 0;
}