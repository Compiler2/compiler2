#include <header.h>

int main_bench()
{
	int i,n;
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		int j,m;
		char s[100];
		my_scanf("%s",s);
		m=strlen(s);
		if(s[m-1]=='r'||s[m-1]=='y')
		{
		for(j=0;j<m-2;j++)
		{
			my_printf("%c",s[j]);
		}
		my_printf("\n");
		}
		else
        {
		for(j=0;j<m-3;j++)
		{
			my_printf("%c",s[j]);
		}
        my_printf("\n");
		}
	}
	return 0;
}

