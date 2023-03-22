#define NUM_ITER 915441

#include <header.h>




int main_bench()
{
	char dna1[600],dna2[600];
	int a,b,i;
	double x=0,ratio;
	my_scanf("%lf",&ratio);
	my_scanf("%s",dna1);
	my_scanf("%s",dna2);
	a=strlen(dna1);
	b=strlen(dna2);
	if(a!=b){
		my_printf("error");
		return 0;
	}
	for(i=0;i<a;i++){
		if(dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='G'&&dna1[i]!='C'){
			my_printf("error");
			return 0;
		}
		if(dna2[i]!='A'&&dna2[i]!='T'&&dna2[i]!='G'&&dna2[i]!='C'){
			my_printf("error");
			return 0;
		}
		if(dna1[i]==dna2[i]) x++;
	}
	if(x/a>=ratio)my_printf("yes");
	else my_printf("no");
	return 0;
}

