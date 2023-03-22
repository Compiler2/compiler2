#include <header.h>

int main_bench()
{
    char s[1000][1000]={0};
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<1000;j++)
		{
		if(s[i][j]=='A')
        s[i][j]='T';
		else if(s[i][j]=='G')
        s[i][j]='C';
		else if(s[i][j]=='C')
        s[i][j]='G';
		else if(s[i][j]=='T')
        s[i][j]='A';
		}
	}
    for(i=0;i<n;i++)
	{
		my_printf("%s\n",s[i]);
	}
	return 0;
}