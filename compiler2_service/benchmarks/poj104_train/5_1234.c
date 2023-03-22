#define NUM_ITER 989790

#include <header.h>

int main_bench()
{
	double bl,jl;
	my_scanf("%lf",&bl);
	char dna1[501],dna2[501];
	my_scanf("%s",dna1);
	my_scanf("%s",dna2);
	int i,k=0,l,n=0;
	l=strlen(dna1);
	for(i=0;i<l;i++)
	{
		if((dna1[i]!='A'&&dna1[i]!='G'&&dna1[i]!='C'&&dna1[i]!='T')||(dna2[i]!='A'&&dna2[i]!='G'&&dna2[i]!='C'&&dna2[i]!='T'))
		{
			k++;
		}
	}
	if(k>0)
	{
		my_printf("error\n");
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(dna1[i]==dna2[i])
			{
				n++;
			}
		}
		jl=1.0*n/(l-1);
		if(jl>bl)
		{
			my_printf("yes\n");
		}
		else
		{
			my_printf("no\n");
		}
	}
	return 0;
}


