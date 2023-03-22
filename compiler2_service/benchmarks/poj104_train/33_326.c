#include <header.h>

char chaina[1000][260], chainb[1000][260];
int len;
int main_bench()
{
	int n, i, j;
	my_scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		my_scanf("%s", chaina[i]);
		len=strlen(chaina[i]);
		for(j=0; j<len; j++)
		{
			switch(chaina[i][j])
			{
			   case 'A':
				   chainb[i][j]='T';
				   break;
			   case 'T':
				   chainb[i][j]='A';
				   break;
			   case 'C':
				   chainb[i][j]='G';
				   break;
			   case 'G':
				   chainb[i][j]='C';
			}
		}
	}
	for(i=0; i<n; i++)
		my_printf("%s\n", chainb[i]);
	return 0;
}
