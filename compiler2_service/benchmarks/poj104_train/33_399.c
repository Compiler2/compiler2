#define NUM_ITER 20033

#include <header.h>

int main_bench(){
	int m,i,t,k;
	char dna[256];
	my_scanf("%d\n",&m);
	for(i=0;i<m;i++){	
		my_scanf("%s",dna);
		t=strlen(dna);
		for(k=0;k<t;k++){
			if(dna[k]=='A'){dna[k]='T';}
			else if(dna[k]=='T'){dna[k]='A';}
			else if(dna[k]=='C'){dna[k]='G';}
			else if(dna[k]=='G'){dna[k]='C';}
	}
		for(k=0;k<t;k++){
			if(k==t-1){my_printf("%c\n",dna[k]);}
			else{my_printf("%c",dna[k]);}
		}
	}
	return 0;
}
