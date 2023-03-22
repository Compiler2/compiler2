#include <header.h>

int main_bench()
{
	int n,i=0,j=0;
	my_scanf("%d",&n);
	char s[100][1000]={0};
	int a[100]={0};
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
		a[i]=strlen(s[i]);
		if(s[i][a[i]-1]=='g')
		{
			for(j=0;j<a[i]-3;j++)
			{
				my_printf("%c",s[i][j]);
			}
			my_printf("\n");
		}
		else 
		{
			for(j=0;j<a[i]-2;j++)
			{
				my_printf("%c",s[i][j]);
			}
			my_printf("\n");
		}
	}
	return 0;
}