#include <header.h>

int main_bench()
{
	char str[1000][40];
	int n,i,j,a[1000]={0},line=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",str[i]);
		for(j=0;str[i][j]!='\0';j++)
		{
			a[i]=a[i]+1;
		}
	}
	for(i=0;i<n;i++)
	{
		line=line+a[i];
		if(line>80)
		{
			my_printf("\n");
			if(i==n-1)
				my_printf("%s",str[i]);
			else
				my_printf("%s ",str[i]);
			line=a[i]+1;
		}
		else
		{
			if(i==n-1)
				my_printf("%s",str[i]);
			else
			{
				if(line+a[i+1]+1>80)
					my_printf("%s",str[i]);
				else
					my_printf("%s ",str[i]);
			}
			line=line+1;
		}
	}
	return 0;
}