#define NUM_ITER 25240

#include <header.h>

int main_bench()
{
	int n;
	my_scanf ("%d",&n);
	char a[1000][256];
	int i,j;
	for (i=0;i<n;i++)
	{
		my_scanf ("%s",a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;a[i][j]!='\0';j++)
		{

			if (a[i][j]=='A')
			{a[i][j]='t';
			}
			if (a[i][j]=='T')
			{ a[i][j]='A';
			}
			if (a[i][j]=='C')
			{a[i][j]='g';
			}
			if (a[i][j]=='G')
			{a[i][j]='C';
			}
			if (a[i][j]=='t')
			{a[i][j]='T';
			}
			if (a[i][j]=='g')
			{ a[i][j]='G';
			}
		}
		my_printf("%s\n",a[i]);
	}
	
	return 0;
}