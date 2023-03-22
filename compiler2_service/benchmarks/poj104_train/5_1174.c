#include <header.h>

int main_bench(){
	double xgd,bz;
	int l,i,count;
	char dna1[110],dna2[110];
	count=0;
	my_scanf("%lf",&bz);
	my_scanf("%s",dna1);
	my_scanf("%s",dna2);
	l=strlen(dna1);
	for(i=0;i<l;i++){
		if(!(dna1[i]=='A'||dna1[i]=='G'||dna1[i]=='C'||dna1[i]=='T')||
			!(dna2[i]=='A'||dna2[i]=='G'||dna2[i]=='C'||dna2[i]=='T')){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<l;i++){
		if(dna1[i]==dna2[i])
			count++;
	}
	xgd=1.0*count/l;
	if(xgd>=bz)
		my_printf("yes");
	else
		my_printf("no");
	return 0;
}