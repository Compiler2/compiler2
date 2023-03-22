#include <header.h>


int main_bench()
{
	int n,i,j,a;
	char s[50][50];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		a=strlen(s[i]);
		if((s[i][a-2]=='e'&&s[i][a-1]=='r')||(s[i][a-2]=='l'&&s[i][a-1]=='y'))
		{
			for(j=0;j<a-2;j++)
				my_printf("%c",s[i][j]);
			my_printf("\n");
		}
		else if((s[i][a-3]=='i'&&s[i][a-2]=='n'&&s[i][a-1]=='g'))
		{
			for(j=0;j<a-3;j++)
				my_printf("%c",s[i][j]);
			my_printf("\n");
		}
		else
			my_printf("%s\n",s[i]);
	}

	return 0;
}

