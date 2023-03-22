#define NUM_ITER 21506

#include <header.h>

int main_bench()
{
	char dna[1000],hubu[1000];
	int n,length;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		my_scanf("%s",dna);
		length=strlen(dna);
		for(int j=0;j<length;j++)
		{
			if(dna[j]=='A')
			{
				hubu[j]='T';
			}
			else if(dna[j]=='T')
			{
				hubu[j]='A';
			}
			else if(dna[j]=='G')
			{
				hubu[j]='C';
			}
			else if(dna[j]=='C')
			{
				hubu[j]='G';
			}
		
	    my_printf("%c",hubu[j]);}
		my_printf("\n");
	}

	return 0;
}


