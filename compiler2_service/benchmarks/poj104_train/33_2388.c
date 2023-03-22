#include <header.h>


int main_bench()
{
	int n,i,j,l;
	my_scanf("%d\n", &n);
	char a[300];
	for(i=1;i<=n;i++)
	{
		gets(a);
		l=strlen(a);
		for(j=0;j<=l;j++)
		{
			if(a[j]=='A')
			{
				a[j]='T';
				my_printf("%c", a[j]);
			}
			else if(a[j]=='T')
			{
				a[j]='A';
				my_printf("%c", a[j]);
			}
			else if(a[j]=='C')
			{
				a[j]='G';
				my_printf("%c", a[j]);
			}
			else if(a[j]=='G')
			{
				a[j]='C';
				my_printf("%c", a[j]);
			}
		}
		my_printf("\n");
	}

return 0;
}