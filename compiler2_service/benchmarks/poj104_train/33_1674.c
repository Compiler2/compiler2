#include <header.h>

char st[1000][256];
int n,i,l,j;
int main_bench()
{
    my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
	my_scanf("%s",st[i]);
	l=strlen(st[i]);
	for (j=0;j<=l;j++)
	{
		if (st[i][j]=='A')
			my_printf("T");
		else if (st[i][j]=='T')
		    my_printf("A");
		else if (st[i][j]=='C')
			my_printf("G");
		else if (st[i][j]=='G')
			my_printf("C");
	}
	my_printf("\n");
	}
	return 0;
}



