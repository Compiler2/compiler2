#define NUM_ITER 24941

#include <header.h>

int main_bench()
{
	char dna[256];
	int n;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		my_scanf("%s",&dna);
		for(int j=0;;j++)
		{
			if(dna[j]=='A') my_printf("T");
			else if(dna[j]=='T') my_printf("A");
			else if(dna[j]=='G') my_printf("C");
			else if(dna[j]=='C') my_printf("G");
			else if(dna[j]=='\0') break;
		}
		my_printf("\n");
	}
}
