#define NUM_ITER 1119931

#include <header.h>

int main_bench(){
	char sentence[101],result[101];
	gets(sentence);
	int l;
	l=strlen(sentence);
	int i,j=0;
	for(i=0;i<l;i++){
		while(sentence[i]==' '&&sentence[i+1]==' '){
			i++;
		}
		result[j]=sentence[i];
		j++;
		if(i==l-1){
		result[j]='\0';

		}
	}
	int n=strlen(result);
	for(i=0;i<n;i++){
	my_printf("%c",result[i]);
	}
	
	return 0;
}