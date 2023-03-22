#include <header.h>

int main_bench(){
	double a;
	int i,j=0;
	char dna1[501],dna2[501];
	my_scanf("%lf",&a);
	my_scanf("%s",&dna1);
	my_scanf("%s",&dna2);
	int len1=strlen(dna1);
    int len2=strlen(dna2);
	if(len1!=len2){
		my_printf("error");
		return 0;
	}
	for(i=0;i<len1;i++){
		if((dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='G'&&dna1[i]!='C')||(dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='C'&&dna1[i]!='G')){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<len1;i++){
		if(dna1[i]==dna2[i]){
			j++;
		}
	}
	if(1.0*j/len1>a){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}