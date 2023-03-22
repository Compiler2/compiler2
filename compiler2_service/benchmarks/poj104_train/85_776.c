#include <header.h>


int decide(char k)
{
	if ((isdigit(k)==0)&&(isalpha(k)==0)&&(k!=95))
		return 0;
	else
		if (isdigit(k)==1)
			return 2;
		else
			return 1;
}


int main_bench()
{
	int n,j,m,i;
	char a[500][20]={0};
	my_scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		gets(a[i]);
		m=strlen(a[i]);
		if (decide(a[i][0])!=1)
		{
			my_printf("no\n");
			continue;
		}
		else
		{
			j=1;
			while (j<m)
			{
				if (decide(a[i][j])==0)
					j=m+2;
				else
					j=j+1;
			}
			if (j==m)
				my_printf("yes\n");
			else
				my_printf("no\n");
		}
	}
return 0;
}