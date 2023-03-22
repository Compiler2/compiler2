#include <header.h>

char s[1024][1024];
int main_bench()
{

	int n,i,l,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(s[i]);
		for(j=0;j<l;j++)
		{
			if(s[i][j]=='A')
				s[i][j]='T';
			else if(s[i][j]=='T')
				s[i][j]='A';
			else if(s[i][j]=='G')
				s[i][j]='C';
			else if(s[i][j]=='C')
				s[i][j]='G';
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%s\n",s[i]);
	}

	return 0;
}
