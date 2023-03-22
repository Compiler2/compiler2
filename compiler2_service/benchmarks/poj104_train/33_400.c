#define NUM_ITER 22824

#include <header.h>

int main_bench()
{
	int i,a,n,k;
	char dna[256];
	my_scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		my_scanf("%s",dna);
	    a=strlen(dna);
		if(k!=0)
			my_printf("\n");
        for(i=0;i<a;i++)
		{
			if(dna[i]=='A')
			    my_printf("%c",'T');
		    else if(dna[i]=='T')
			    my_printf("%c",'A');
		    else if(dna[i]=='C')
		    	my_printf("%c",'G');
		    else if(dna[i]=='G')
 		    	my_printf("%c",'C');
		} 
	}
return 0;
}
