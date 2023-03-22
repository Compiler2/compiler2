#define NUM_ITER 22084

#include <header.h>

int main_bench(){
	int n,len;
	my_scanf("%d",&n);
	char dna[256];
	char hubu[256];
	for(int i=0;i<n;i++){
		my_scanf("%s",dna);
		len=strlen(dna);
		for(int r=0;r<=len;r++){
			if(dna[r]-'A'==0){
				hubu[r]='T';
			}else if(dna[r]-'T'==0){
				hubu[r]='A';
			}else if(dna[r]-'C'==0){
				hubu[r]='G';
			}else if(dna[r]-'G'==0){
				hubu[r]='C';
			}else{
				hubu[r]=0;
			}
		}
		my_printf("%s\n",hubu);
	}
    return 0;
}