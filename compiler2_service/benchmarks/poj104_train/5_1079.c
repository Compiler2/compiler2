#include <header.h>

int main_bench(){
	float a,rate;
	int i,lena,lenb,sum=0;
	my_scanf("%f",&a);
	char an[501],bn[501];
	my_scanf("%s",an);
	my_scanf("%s",bn);
	lena=strlen(an);
	lenb=strlen(bn);
	if(lena!=lenb){
		my_printf("error");
		return 0;
	}
	for(i=0;i<lena;i++){
		if((an[i]!='A'&&an[i]!='T'&&an[i]!='C'&&an[i]!='G')||(bn[i]!='A'&&bn[i]!='T'&&bn[i]!='C'&&bn[i]!='G')){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<lena;i++){
		if(an[i]==bn[i])
			sum+=1;
	}
	rate=1.0*sum/lena;
	if(rate>a)
		my_printf("yes");
	else
		my_printf("no");
	return 0;
}