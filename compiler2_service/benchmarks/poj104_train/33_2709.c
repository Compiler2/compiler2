#include <header.h>

int main_bench(){
	int n,i,j,count;
	char dna[256];
	my_scanf("%d",&n);
	gets(dna);
	for(i=0;i<n;i++){
		gets(dna);
		count=strlen(dna);
		for(j=0;j<count;j++){
			if(dna[j]=='A')
				my_printf("T");
			else if(dna[j]=='T')
				my_printf("A");
			else if(dna[j]=='C')
				my_printf("G");
			else if(dna[j]=='G')
				my_printf("C");
		}
		my_printf("\n");
	}
	return 0;
}