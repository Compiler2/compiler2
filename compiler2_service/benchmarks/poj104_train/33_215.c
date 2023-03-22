#include <header.h>

int main_bench()
{
	int n,i,j;
	char a[1000][257];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			switch(a[i][j])
			{
			case'A':
				a[i][j]='T';
				break;
			case'G':
				a[i][j]='C';
				break;
			case'C':
				a[i][j]='G';
				break;
			case'T':
				a[i][j]='A';
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%s",a[i]);
		if(i!=n-1)
		{
			my_printf("\n");
		}
	}

	return 0;
}
