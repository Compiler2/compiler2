#include <header.h>

int main_bench()
{
	double per;
	double SUM,sum=0;
	int len;
	char DNA[500];
	char dna[500];
	my_scanf("%lf",&per);
	my_scanf("%s",&DNA);
	my_scanf("%s",&dna);
	SUM=strlen(DNA);
	len=strlen(dna);
	if(SUM!=len)
	{
		my_printf("error\n");
		return 0;
	}
	for(int j=0;j<SUM;j++)
	{
		if(DNA[j]!='A'&&DNA[j]!='T'&&DNA[j]!='C'&&DNA[j]!='G')
		{
			my_printf("error\n");
			return 0;
		}
		if(dna[j]!='A'&&dna[j]!='T'&&dna[j]!='C'&&dna[j]!='G')
		{
			my_printf("error\n");
			return 0;
		}
	}

	for(int i=0;i<SUM;i++)
	{
		if(DNA[i]==dna[i])
		{
			sum++;
		}
	}
	SUM=sum/SUM;
	if(SUM>per)
	{
		my_printf("yes\n");
	}
	else
	{
		my_printf("no\n");
	}
	return 0;
}
