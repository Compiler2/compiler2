#include <header.h>


int main_bench()
{
	int n,len,i,j;
	char a[256];

	my_scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		gets(a);
		len=strlen(a);
		for (j=0;j<len;j++)
		{
			if (a[j]=='A')
			{
				my_printf("T");
			}
			if (a[j]=='T')
			{
				my_printf("A");
			}
			if (a[j]=='C')
			{
				my_printf("G");
			}
			if (a[j]=='G')
			{
				my_printf("C");
			}
		}
		my_printf("\n");
	}


	return 0;
}
