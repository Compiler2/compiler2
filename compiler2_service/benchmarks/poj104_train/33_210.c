#include <header.h>

int main_bench()
{
	int n,i,k;
	char s[10000][256],sd[10000][256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;s[i][k]!='\0';k++)
		{
			if(s[i][k]=='A')
			{
				sd[i][k]='T';
			}
			if(s[i][k]=='T')
			{
				sd[i][k]='A';
			}
			if(s[i][k]=='C')
			{
				sd[i][k]='G';
			}
			if(s[i][k]=='G')
			{
				sd[i][k]='C';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%s",sd[i]);
		my_printf("\n");
	}
	return 0;
}