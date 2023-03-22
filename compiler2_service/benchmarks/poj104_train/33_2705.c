#include <header.h>

int main_bench()
{
	int n,i,l,j;
	char dna[256],change[256];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",&dna);
		l = strlen(dna);
		for (j=0;j<l;j++)
		{
			if (dna[j] == 'A')
				change[j] = 'T';
			else if (dna[j] == 'T')
				change[j] = 'A';
			else if (dna[j] == 'C')
				change[j] = 'G';
			else 
				change[j] = 'C';
		}
		change[l] = '\0';
		my_printf("%s\n",change);
	}
	return 0;
}