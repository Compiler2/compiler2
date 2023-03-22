#define NUM_ITER 15861

#include <header.h>


int main_bench()
{
	int n, i, j;
	char **dna;
	my_scanf("%d", &n);
	dna=(char**)malloc(sizeof(char*)*n);
	for (i=0;i<n;i++)
		dna[i]=(char*)malloc(sizeof(char)*255);
	
	for (i=0;i<n;i++)
		my_scanf("%s",dna[i]);

	char ch;

	for (i=0;i<n;i++)
	{
		for (j=0;(ch=dna[i][j])!=0;j++)
		{
			switch(ch)
			{
			case 'A':
				my_printf("T");
				break;
			case 'T':
				my_printf("A");
				break;
			case 'G':
				my_printf("C");
				break;
			case 'C':
				my_printf("G");
				break;
			}
		}
		my_printf("\n");
	}

	for (i=0;i<n;i++)
		free(dna[i]);
	free(dna);
	return 0;
}