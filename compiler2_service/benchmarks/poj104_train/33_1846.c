#include <header.h>

int main_bench(){
	int n;
	char DNA[1000][256],*p;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%s",DNA[i]);
		for(p=DNA[i];*p!='\0';p++){
			if(*p=='A'){
				*p='T';
			}
			else if(*p=='T'){
				*p='A';
			}
			else if(*p=='G'){
				*p='C';
			}
			else if(*p=='C'){
				*p='G';
			}
		}
	}
	
	for(int j=0;j<n;j++){
		my_printf("%s\n",DNA[j]);
	}

	return 0;
}